/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:34:42 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 23:18:48 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = -1;
	while (src[++idx])
		dest[idx] = src[idx];
	dest[idx] = '\0';
}

int	ft_read_buff(t_buff *buffer, char **line)
{
	size_t	len_line;
	size_t	idx;
	int		check;

	len_line = ft_strlen(*line);
	*line = ft_realloc(*line, len_line);
	if (*line == NULL)
		return (-1);
	idx = 0;
	check = 0;
	while (buffer->buff[idx])
	{
		(*line)[len_line] = buffer->buff[idx];
		if (buffer->buff[idx++] == '\n')
		{
			check = 1;
			break ;
		}
		++len_line;
	}
	(*line)[len_line] = '\0';
	ft_strcpy(buffer->buff, &buffer->buff[idx]);
	return (check);
}

char	*ft_free_line(char *line)
{
	free(line);
	return (NULL);
}

static int	ft_readline(t_buff *buffer, char **line, int fd, t_buff **head)
{
	int	check;
	int	len;

	while (1)
	{
		len = read(fd, buffer->buff, BUFFER_SIZE);
		if (len <= 0)
			break ;
		buffer->buff[len] = '\0';
		check = ft_read_buff(buffer, line);
		if (check)
			return (check);
	}
	ft_remove_buff(head, fd);
	if (len < 0)
		*line = ft_free_line(*line);
	return (len);
}

int	get_next_line(int fd, char **line)
{
	static t_buff	*head;
	t_buff			*buffer;
	int				check;
	int				len;

	if (BUFFER_SIZE < 1 || fd < 0 || line == NULL)
		return (-1);
	if (head == NULL && ft_new_buff(fd, &head) == NULL)
		return (-1);
	buffer = ft_find_buff(head, fd);
	if (buffer == NULL)
		return (-1);
	*line = NULL;
	check = ft_read_buff(buffer, line);
	if (check)
		return (check);
	len = ft_readline(buffer, line, fd, &head);
	return (len);
}
