/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:32:26 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:37:43 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char *argv[])
{
	t_info	info;

	setting_num(&info, argc, argv);
	if (!check_sort_a(&info, info.size))
	{
		if (info.a_top == 2)
			three_arg(&info);
		else if (info.a_top == 4)
			five_arg(&info);
		else
			a_to_b(&info, info.size);
	}
	free(info.a);
	free(info.b);
}
