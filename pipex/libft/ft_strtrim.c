/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:45:04 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:45:04 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*tmp;
	char			*result;
	char const		*start;
	char const		*end;

	if (!s1)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	start = s1;
	while (*s1)
		s1++;
	while (ft_strchr(set, *s1) && s1 != start)
		s1--;
	end = s1;
	result = (char *)malloc(end - start + 2);
	if (!result)
		return (0);
	tmp = result;
	while (start != end + 1)
		*tmp++ = *start++;
	*tmp = 0;
	return (result);
}
