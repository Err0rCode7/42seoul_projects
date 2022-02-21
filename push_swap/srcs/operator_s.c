/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:30:34 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:37:26 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_info *info, int flag)
{
	int	temp;

	if (info->a_top >= 1)
	{
		temp = info->a[info->a_top];
		info->a[info->a_top] = info->a[info->a_top - 1];
		info->a[info->a_top - 1] = temp;
	}
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_info *info, int flag)
{
	int	temp;

	if (info->a_top >= 1)
	{
		temp = info->b[info->b_top];
		info->b[info->b_top] = info->b[info->b_top - 1];
		info->b[info->b_top - 1] = temp;
	}
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_info *info)
{
	sa(info, 0);
	sb(info, 0);
	write(1, "ss\n", 3);
}
