/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:43:17 by seujeon           #+#    #+#             */
/*   Updated: 2022/01/22 21:31:06 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int arr[], int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			++j;
		}
		++i;
	}
}

void	small_sort_a(t_info *info, int size)
{
	if (size == 2 || size == 3)
	{
		if (info->a[info->a_top] > info->a[info->a_top - 1])
			sa(info, 1);
		if (size == 3)
		{
			if (info->a[info->a_top - 1] > info->a[info->a_top - 2])
			{
				ra(info, 1);
				sa(info, 1);
				rra(info, 1);
				if (info->a[info->a_top] > info->a[info->a_top - 1])
					sa(info, 1);
			}
		}
	}
	if (size == 4)
		four_arg(info);
}

void	small_sort_b(t_info *info, int size)
{
	if (size >= 1 && size <= 3)
		pa(info);
	if (size == 2 || size == 3)
	{
		pa(info);
		if (info->a[info->a_top] > info->a[info->a_top - 1])
			sa(info, 1);
		if (size == 3)
		{
			pa(info);
			if (info->a[info->a_top] > info->a[info->a_top - 1])
				sa(info, 1);
			if (info->a[info->a_top - 1] > info->a[info->a_top - 2])
			{
				ra(info, 1);
				sa(info, 1);
				rra(info, 1);
				if (info->a[info->a_top] > info->a[info->a_top - 1])
					sa(info, 1);
			}
		}
	}
}
