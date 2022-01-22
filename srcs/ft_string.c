/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:14:24 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:27:36 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		len;

	if (src == NULL)
		return (0);
	len = 0;
	if (size > 0)
	{
		while (*src && len < size - 1)
		{
			*dest++ = *src++;
			++len;
		}
		*dest = '\0';
	}
	while (*src)
	{
		++len;
		++src;
	}
	return (len);
}

int	ft_atoi(const char *str, int *result)
{
	long long	num;
	int			sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - '0');
	if (*str != '\0' || (sign != -1 && num > 2147483647)
		|| (sign == -1 && num > 2147483648))
		return (0);
	*result = num * sign;
	return (1);
}
