/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:29:40 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:29:46 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_info *info)
{
	if (info->b_top >= 0)
	{
		info->a_top++;
		info->a[info->a_top] = info->b[info->b_top];
		info->b_top--;
		write(1, "pa\n", 3);
	}
}

void	pb(t_info *info)
{
	if (info->a_top >= 0)
	{
		info->b_top++;
		info->b[info->b_top] = info->a[info->a_top];
		info->a_top--;
		write(1, "pb\n", 3);
	}
}
