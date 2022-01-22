/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:20:55 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 22:33:44 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_info *info)
{
	if (info->b_top >= 0)
	{
		info->a_top++;
		info->a[info->a_top] = info->b[info->b_top];
		info->b_top--;
	}
}

void	pb(t_info *info)
{
	if (info->a_top >= 0)
	{
		info->b_top++;
		info->b[info->b_top] = info->a[info->a_top];
		info->a_top--;
	}
}
