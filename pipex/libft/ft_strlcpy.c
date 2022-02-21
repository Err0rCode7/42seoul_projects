/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:44:37 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:44:37 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		count;

	if (!dest || !src)
		return (0);
	count = 0;
	while (count + 1 < size && *src)
	{
		*dest++ = *src++;
		count++;
	}
	if (size != 0)
		*dest = 0;
	while (*src++)
		count++;
	return (count);
}
