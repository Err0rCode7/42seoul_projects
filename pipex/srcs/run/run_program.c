/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:40:01 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/21 11:59:10 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	cmd_process(t_pipex_info *cmd_info, int target_cmd, int *prev_fd)
{
	connect_pipe(prev_fd, STDOUT_FILENO, cmd_info);
	run_cmd(cmd_info, target_cmd);
}

void	run_program(t_pipex_info *cmd_info, int target_cmd)
{
	pid_t	pid;
	int		fd[2];
	int		status;

	redirection_in(cmd_info);
	if (pipe(fd) == -1)
		exit_program(cmd_info, "cannot connect pipe", "");
	pid = fork();
	if (pid == -1)
		exit_program(cmd_info, "fork is failed", "");
	else if (pid == CHILD)
		cmd_process(cmd_info, target_cmd - 1, fd);
	if (waitpid(pid, &status, WNOHANG) == -1)
		exit_program(cmd_info, strerror(PROCESS_ERROR), "");
	redirection_out(cmd_info);
	connect_pipe(fd, STDIN_FILENO, cmd_info);
	run_cmd(cmd_info, target_cmd);
}
