/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:42:37 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:42:38 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int		count;

	count = 1;
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				len;
	int				flag;
	unsigned int	num;

	len = num_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len--] = 0;
	flag = 0;
	if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	num = n;
	while (len >= 0)
	{
		result[len--] = num % 10 + 48;
		num /= 10;
	}
	if (flag == 1)
		result[0] = '-';
	return (result);
}
