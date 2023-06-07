/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:26 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/06 18:34:24 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack *stack_a)
{
	int	temp;

	temp = stack_a->stack[0];
	stack_a->stack[0] = stack_a->stack[1];
	stack_a->stack[1] = temp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *stack_b)
{
	int	temp;

	temp = stack_b->stack[0];
	stack_b->stack[0] = stack_b->stack[1];
	stack_b->stack[1] = temp;
	ft_printf("sb\n");
}

void	swap_s(t_stack *stack_a, t_stack *stack_b)
{
	int	temp_a;
	int	temp_b;

	temp_a = stack_a->stack[0];
	temp_b = stack_b->stack[0];
	stack_a->stack[0] = stack_a->stack[1];
	stack_b->stack[0] = stack_b->stack[1];
	stack_a->stack[1] = temp_a;
	stack_b->stack[1] = temp_b;
	ft_printf("ss\n");
}
