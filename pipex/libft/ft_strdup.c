/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:44:26 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:44:26 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	char	*tmp;

	result = (char *)malloc((ft_strlen(s) + 1));
	if (!result)
		return (0);
	tmp = result;
	while (*s)
		*tmp++ = *s++;
	*tmp = 0;
	return (result);
}
