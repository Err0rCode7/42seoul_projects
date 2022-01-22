/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:45:45 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 19:45:56 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_arg(t_info *info)
{
	if (info->a[2] > info->a[1])
		sa(info, 1);
	if (info->a[1] > info->a[0])
	{
		rra(info, 1);
		if (info->a[2] > info->a[1])
			sa(info, 1);
	}
}

void	four_arg(t_info *info)
{
	if (info->a[info->a_top] > info->a[info->a_top - 1])
		sa(info, 1);
	pb(info);
	if (info->a[info->a_top] > info->a[info->a_top - 1])
		sa(info, 1);
	pb(info);
	if (info->a[info->a_top] > info->a[info->a_top - 1]
		&& info->b[info->b_top] < info->b[info->b_top - 1])
		ss(info);
	else if (info->a[info->a_top] > info->a[info->a_top - 1])
		sa(info, 1);
	else if (info->b[info->b_top] < info->b[info->b_top - 1])
		sb(info, 1);
	pa(info);
	if (info->a[info->a_top] > info->a[info->a_top - 1])
		sa(info, 1);
	pa(info);
	if (info->a[info->a_top] > info->a[info->a_top - 1])
		sa(info, 1);
}

void	five_arg(t_info *info)
{
	int		*arr;
	int		i;

	i = -1;
	arr = copy_arr(info, 5, 1);
	ft_sort(arr, 5);
	while (++i < 5)
	{
		if (arr[1] >= info->a[info->a_top])
			pb(info);
		else
			ra(info, 1);
	}
	three_arg(info);
	if (info->b[0] > info->b[1])
		sb(info, 1);
	pa(info);
	pa(info);
	free(arr);
}
