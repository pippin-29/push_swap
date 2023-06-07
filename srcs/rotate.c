/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:22 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/06 18:41:47 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack *stack_a)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_a->stack[0];
	while (i < stack_a->size)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->stack[stack_a->size - 1] = temp;
	ft_printf("ra\n");
}

void	rotate_b(t_stack *stack_b)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack_b->stack[0];
	while (i < stack_b->size)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->stack[stack_b->size - 1] = temp;
	ft_printf("rb\n");
}

void	rotate_r(t_stack *stack_a, t_stack *stack_b)
{
	int	temp_a;
	int	temp_b;
	int	i;

	i = 0;
	temp_a = stack_a->stack[0];
	temp_b = stack_b->stack[0];
	while (i < stack_a->size)
	{
		stack_a->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_a->stack[stack_a->size - 1] = temp_a;
	i = 0;
	while (i < stack_b->size)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->stack[stack_b->size - 1] = temp_b;
	ft_printf("rr\n");
}
