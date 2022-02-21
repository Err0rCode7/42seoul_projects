/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:11:51 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/14 21:12:31 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	t_pipex_info	cmd_info;

	invalid(argc, argv + 1);
	init(argv, &cmd_info, argc - 3, envp);
	run_program(&cmd_info, argc - 4);
	return (0);
}
