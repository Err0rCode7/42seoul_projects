/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:40:55 by seujeon           #+#    #+#             */
/*   Updated: 2022/02/15 13:11:33 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	invalid(int argc, char **infile)
{
	if (argc != 5)
		exit_program(NULL, strerror(ARGUMENT_ERROR), "");
	if (access(*infile, R_OK))
	{
		if (access(*infile, F_OK))
			ft_print_err(strerror(FILE_ERROR), *infile);
		else
			ft_print_err(strerror(ACCESS_ERROR), *infile);
		*infile = ft_strdup("/dev/null");
		if (!*infile)
			exit_program(NULL, strerror(MALLOC_ERROR), "");
	}
}
