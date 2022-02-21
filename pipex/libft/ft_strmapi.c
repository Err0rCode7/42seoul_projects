/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:44:45 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 10:44:45 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	size_t		count;
	char		*result;

	if (!s)
		return (0);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = 0;
	count = 0;
	while (count < len)
	{
		*(result + count) = f(count, *(s + count));
		count++;
	}
	return (result);
}
