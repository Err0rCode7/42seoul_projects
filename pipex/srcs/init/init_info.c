/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:15:02 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/21 11:41:07 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init_info(t_pipex_info *cmd_info, char **cmd_arr, int num)
{
	cmd_info->cmd_data = 0;
	cmd_info->cmd_path = 0;
	cmd_info->env = 0;
	cmd_info->infile = cmd_arr[1];
	cmd_info->outfile = cmd_arr[num + 2];
	cmd_info->envp = 0;
}
