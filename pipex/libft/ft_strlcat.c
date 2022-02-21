/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:44:33 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:44:33 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		d_count;
	size_t		s_count;
	size_t		count;

	d_count = ft_strlen(dest);
	s_count = ft_strlen(src);
	if (d_count >= size)
		return (size + s_count);
	count = 0;
	dest += d_count;
	while (count++ + d_count + 1 < size && *src)
		*dest++ = *src++;
	*dest = 0;
	return (s_count + d_count);
}
