/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 05:55:05 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/08 03:47:09 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	index_of_min(t_stack *stack)
{
	int	i;
	int	index_of_min;
	int	min;

	i = 0;
	index_of_min = 0;
	min = INT_MAX;
	while (i < stack->size)
	{
		if (stack->stack[i] < min)
		{
			index_of_min = i;
			min = stack->stack[i];
		}
		i++;
	}
	return (index_of_min);
}

int	check_sort(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stack_a->size - 1)
	{
		if (stack_a->stack[i] > stack_a->stack[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

int	bit_width(t_stack *stack_a)
{
	int	bits;
	int	max_num;

	max_num = stack_a->size - 1;
	bits = 0;
	while (max_num >> bits != 0)
		bits++;
	return (bits);
}
