/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:24:26 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 18:24:27 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_a(t_info *info, int size)
{
	int		i;

	i = info->a_top - size + 1;
	while (i < info->a_top)
	{
		if (info->a[i] < info->a[i + 1])
			return (0);
		++i;
	}
	return (1);
}

int	check_sort_b(t_info *info, int size)
{
	int		i;

	i = info->b_top - size + 1;
	while (i < info->b_top)
	{
		if (info->b[i] > info->b[i + 1])
			return (0);
		++i;
	}
	return (1);
}
