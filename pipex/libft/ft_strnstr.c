/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:44:56 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:44:57 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		s2_len;
	size_t		count;

	if (!*s2)
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	if (s1 && s2 && (s1 == s2) && len >= s2_len)
		return ((char *)s1);
	count = 0;
	while (*s1 && count + s2_len <= len)
	{
		if (*s1 == *s2)
			if (ft_memcmp(s1, s2, s2_len) == 0)
				return ((char *)s1);
		s1++;
		count++;
	}
	return (0);
}
