/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:34:12 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 23:03:16 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_info *info)
{
	int	temp;

	if (info->a_top >= 1)
	{
		temp = info->a[info->a_top];
		info->a[info->a_top] = info->a[info->a_top - 1];
		info->a[info->a_top - 1] = temp;
	}
}

void	sb(t_info *info)
{
	int	temp;

	if (info->a_top >= 1)
	{
		temp = info->b[info->b_top];
		info->b[info->b_top] = info->b[info->b_top - 1];
		info->b[info->b_top - 1] = temp;
	}
}

void	ss(t_info *info)
{
	sa(info);
	sb(info);
}
