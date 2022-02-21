/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:19:11 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 22:52:45 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

typedef struct s_buff
{
	int					fd;
	char				buff[BUFFER_SIZE + 1];
	struct s_buff		*next;
}				t_buff;

int				get_next_line(int fd, char **line);
int				ft_read_buff(t_buff *buffer, char **line);
size_t			ft_strlen(char *str);
t_buff			*ft_new_buff(int fd, t_buff **dest);
t_buff			*ft_find_buff(t_buff *buffer, int fd);
char			*ft_realloc(char *line, size_t len);
void			ft_remove_buff(t_buff **head, int fd);

#endif
