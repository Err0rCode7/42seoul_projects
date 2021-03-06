/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:53:55 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/21 11:42:53 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	redirection_in(t_pipex_info *cmd_info)
{
	int	fd;

	fd = open(cmd_info->infile, O_RDONLY);
	if (fd < 0)
	{
		if (access(cmd_info->infile, F_OK))
			exit_program(cmd_info, strerror(FILE_ERROR), cmd_info->infile);
		else
			exit_program(cmd_info, strerror(ACCESS_ERROR), cmd_info->infile);
	}
	if (dup2(fd, STDIN_FILENO) == -1)
	{
		close(fd);
		exit_program(cmd_info, "dup is failed", "");
	}
	close(fd);
}

void	redirection_out(t_pipex_info *cmd_info)
{
	int	fd;

	fd = open(cmd_info->outfile, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		exit_program(cmd_info, strerror(ACCESS_ERROR), cmd_info->outfile);
	}
	if (dup2(fd, STDOUT_FILENO) == -1)
	{
		close(fd);
		exit_program(cmd_info, "dup is failed", "");
	}
	close(fd);
}

void	connect_pipe(int *fd, int io, t_pipex_info *cmd_info)
{
	if (dup2(fd[io], io) == -1)
	{
		close(fd[0]);
		close(fd[1]);
		exit_program(cmd_info, "dup is failed", "");
	}
	close(fd[0]);
	close(fd[1]);
}

void	run_cmd(t_pipex_info *cmd_info, int target_cmd)
{
	const char	*cur_cmd_path;
	char *const	*cur_cmd_data;

	cur_cmd_path = cmd_info->cmd_path[target_cmd];
	cur_cmd_data = cmd_info->cmd_data[target_cmd];
	if (execve(cur_cmd_path, cur_cmd_data, cmd_info->envp) == -1)
		exit_program(cmd_info, "execve is failed", "");
}
