/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:43:44 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:43:44 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			count;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	count = 0;
	while (count++ < n)
	{
		if (*tmp1 != *tmp2)
			return ((int)(*tmp1 - *tmp2));
		tmp1++;
		tmp2++;
	}
	return (0);
}
