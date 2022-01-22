/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:34:24 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 22:34:25 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_info *info)
{
	int		i;
	int		temp;

	i = info->a_top;
	if (i != -1)
	{
		temp = info->a[info->a_top];
		while (i > 0)
		{
			info->a[i] = info->a[i - 1];
			--i;
		}
		info->a[0] = temp;
	}
}

void	rb(t_info *info)
{
	int		i;
	int		temp;

	i = info->b_top;
	if (i != -1)
	{
		temp = info->b[info->b_top];
		while (i > 0)
		{
			info->b[i] = info->b[i - 1];
			--i;
		}
		info->b[0] = temp;
	}
}

void	rr(t_info *info)
{
	ra(info);
	rb(info);
}
