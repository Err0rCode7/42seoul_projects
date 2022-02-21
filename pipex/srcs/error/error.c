/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:40:42 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/21 11:59:32 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exit_program(t_pipex_info *cmd_info, const char *msg, char *filename)
{
	free_pipex(cmd_info);
	ft_print_err(msg, filename);
	exit(1);
}

void	ft_print_err(const char *message, char *filename)
{
	if (*message)
	{
		write(2, message, ft_strlen(message));
		if (*filename)
		{
			write(2, ": ", 2);
			write(2, filename, ft_strlen(filename));
		}
		write(2, "\n", 1);
	}
}
