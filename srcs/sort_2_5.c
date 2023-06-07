/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 04:54:27 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/08 03:53:21 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack *stack_a)
{
	if (stack_a->stack[0] > stack_a->stack[1])
		swap_a(stack_a);
}

void	sort_3(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	a = stack_a->stack[0];
	b = stack_a->stack[1];
	c = stack_a->stack[2];
	if (a > b && b > c && c < a)
	{
		swap_a(stack_a);
		rev_rotate_a(stack_a);
	}
	if (a > b && b < c && c > a)
		swap_a(stack_a);
	if (a > b && b < c && c < a)
		rotate_a(stack_a);
	if (a < b && b > c && c > a)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	if (a < b && b > c && c < a)
		rev_rotate_a(stack_a);
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	push_b(stack_b, stack_a);
	sort_3(stack_a);
	sort_4_help(stack_a, stack_b);
}

void	sort_4_help(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->stack[0] > stack_b->stack[0])
		push_a(stack_a, stack_b);
	else
	{
		if (stack_b->stack[0] < stack_a->stack[1])
		{
			push_a(stack_a, stack_b);
			swap_a(stack_a);
		}
		else
		{
			if (stack_b->stack[0] < stack_a->stack[2])
			{
				rev_rotate_a(stack_a);
				push_a(stack_a, stack_b);
				rev_rotate_a(stack_a);
				rev_rotate_a(stack_a);
			}
			else
			{
				push_a(stack_a, stack_b);
				rotate_a(stack_a);
			}
		}
	}
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	int	min_index;

	min_index = index_of_min(stack_a);
	if (min_index == 1)
		swap_a(stack_a);
	else if (min_index == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (min_index == 3)
	{
		rev_rotate_a(stack_a);
		rev_rotate_a(stack_a);
	}
	else if (min_index == 4)
		rev_rotate_a(stack_a);
	push_b(stack_b, stack_a);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
