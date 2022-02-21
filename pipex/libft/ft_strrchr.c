/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:45:00 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:45:00 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*location;

	location = 0;
	while (*s)
	{
		if (*s == c)
			location = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (location);
}
