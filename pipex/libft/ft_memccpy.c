/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:43:32 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:43:33 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;

	d_tmp = (unsigned char *)dest;
	s_tmp = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		*d_tmp++ = *(s_tmp + count);
		if (*(s_tmp + count) == (unsigned char)c)
			return (d_tmp);
		count++;
	}
	return (0);
}
