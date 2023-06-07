/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:17 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/06 18:41:03 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pop(t_stack *stack)
{
	int	*resized_stack;
	int	temp;
	int	i;

	i = 0;
	temp = stack->stack[0];
	while (i < stack->size - 1)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->size -= 1;
	resized_stack = realloc(stack->stack, (sizeof(int) * stack->size));
	if (resized_stack != NULL)
		stack->stack = resized_stack;
	else
		perror("Error: Stack Resize Pop\n");
	return (temp);
}

void	push(t_stack *stack, int popped)
{
	int	*resized_stack;
	int	i;

	stack->size += 1;
	resized_stack = realloc(stack->stack, (sizeof(int) * stack->size));
	if (resized_stack != NULL)
		stack->stack = resized_stack;
	else
		perror("Error: Stack Resize Push\n");
	i = stack->size - 1;
	while (i)
	{
		stack->stack[i] = stack->stack[i - 1];
		i--;
	}
	stack->stack[0] = popped;
}

int	push_a(t_stack *stack_a, t_stack *stack_b)
{
	int	popped;

	if (stack_b->size < 1)
		return (-1);
	popped = pop(stack_b);
	push(stack_a, popped);
	ft_printf("pa\n");
	return (0);
}

int	push_b(t_stack *stack_b, t_stack *stack_a)
{
	int	popped;

	if (stack_a->size < 1)
		return (-1);
	popped = pop(stack_a);
	push(stack_b, popped);
	ft_printf("pb\n");
	return (0);
}
