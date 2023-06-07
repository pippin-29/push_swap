/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:19 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/06 18:40:32 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rev_rotate_a(t_stack *stack_a)
{
	int	temp;
	int	i;

	i = stack_a->size - 1;
	temp = stack_a->stack[i];
	while (i)
	{
		stack_a->stack[i] = stack_a->stack[i - 1];
		i--;
	}
	stack_a->stack[0] = temp;
	ft_printf("rra\n");
}

void	rev_rotate_b(t_stack *stack_b)
{
	int	temp;
	int	i;

	i = stack_b->size - 1;
	temp = stack_b->stack[i];
	while (i)
	{
		stack_b->stack[i] = stack_b->stack[i - 1];
		i--;
	}
	stack_b->stack[0] = temp;
	ft_printf("rrb\n");
}

void	rev_rotate_r(t_stack *stack_a, t_stack *stack_b)
{
	int	temp_a;
	int	temp_b;
	int	i;
	int	j;

	i = stack_a->size - 1;
	j = stack_b->size - 1;
	temp_a = stack_a->stack[i];
	temp_b = stack_b->stack[j];
	while (i)
	{
		stack_a->stack[i] = stack_a->stack[i - 1];
		i--;
	}
	stack_a->stack[0] = temp_a;
	i = 0;
	while (j)
	{
		stack_b->stack[j] = stack_b->stack[j - 1];
		j--;
	}
	stack_b->stack[j] = temp_b;
	ft_printf("rrr\n");
}
