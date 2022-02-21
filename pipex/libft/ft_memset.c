/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:43:58 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:43:58 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*tmp1;
	unsigned char	tmp2;

	tmp1 = (unsigned char *)s;
	tmp2 = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		*(tmp1 + count) = tmp2;
		count++;
	}
	return (s);
}
