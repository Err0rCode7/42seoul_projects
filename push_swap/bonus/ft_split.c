/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:34:32 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 22:25:14 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = c;
	return (s);
}

static void	*ft_calloc_to(size_t count, size_t size, char **dest)
{
	*dest = malloc(count * size);
	if (*dest == NULL)
		return (NULL);
	ft_memset(*dest, 0, count * size);
	return (*dest);
}

static size_t	ft_word_count(char const *str, char c)
{
	size_t	count;

	count = 0;
	if (*str == '\0')
		return (0);
	if (*str++ != c)
		++count;
	while (*str)
	{
		if (*str != c && *(str - 1) == c)
			++count;
		++str;
	}
	return (count);
}

char	**ft_free_strs(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*str;
	size_t	size;
	size_t	i;

	if (!s || !ft_calloc_to(
			ft_word_count(s, c) + 1, sizeof(char *), (char **)& result))
		exit(1);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;
			while (*s && *s != c)
				++s;
			size = s - str + 1;
			if (ft_calloc_to(size, sizeof(char), &result[i]) == NULL)
				exit(1);
			ft_strlcpy(result[i++], str, size);
		}
		else
			++s;
	}
	return (result);
}
