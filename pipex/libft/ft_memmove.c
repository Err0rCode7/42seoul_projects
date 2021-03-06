/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:43:53 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:43:53 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			count;

	if (!dest && !src)
		return (0);
	count = 0;
	tmp = dest;
	if (dest < src)
	{
		while (count < n)
		{
			*(tmp + count) = *((unsigned char *)src + count);
			count++;
		}
		return (dest);
	}
	while (count++ < n)
		*(tmp + n - count) = *((unsigned char *)src + n - count);
	return (dest);
}
