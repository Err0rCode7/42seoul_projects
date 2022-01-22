/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:34:18 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 22:34:19 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_info *info)
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
}

void	rrb(t_info *info)
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
}

void	rrr(t_info *info)
{
	rra(info);
	rrb(info);
}
