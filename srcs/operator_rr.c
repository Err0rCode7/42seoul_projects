/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:30:11 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:30:21 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_info *info, int flag)
{
	int		i;
	int		temp;

	i = 0;
	temp = info->a[0];
	while (i < info->a_top)
	{
		info->a[i] = info->a[i + 1];
		++i;
	}
	info->a[info->a_top] = temp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_info *info, int flag)
{
	int		i;
	int		temp;

	i = 0;
	temp = info->b[0];
	while (i < info->b_top)
	{
		info->b[i] = info->b[i + 1];
		++i;
	}
	info->b[info->b_top] = temp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_info *info)
{
	rra(info, 0);
	rrb(info, 0);
	write(1, "rrr\n", 4);
}
