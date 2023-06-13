/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 06:11:02 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/09 12:51:53 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_small_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		sort_2(stack_a);
	else if (stack_a->size == 3)
		sort_3(stack_a);
	else if (stack_a->size == 4)
		sort_4(stack_a, stack_b);
	else if (stack_a->size == 5)
		sort_5(stack_a, stack_b);
}

void	sort_big_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	bits;
	int	size_a;
	int	b;
	int	r;

	bits = bit_width(stack_a);
	b = 0;
	size_a = stack_a->size;
	while (b < bits)
	{
		r = 0;
		while (r < size_a)
		{
			if (((stack_a->stack[0] >> b) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_b, stack_a);
			r++;
		}
		b++;
		while (stack_b->size)
			push_a(stack_a, stack_b);
	}
}

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_sort(stack_a))
	{
		if (stack_a->size <= 5)
			sort_small_stack(stack_a, stack_b);
		else
		{
			transform_a(stack_a);
			sort_big_stack(stack_a, stack_b);
		}
	}
	else
		exit(0);
}
