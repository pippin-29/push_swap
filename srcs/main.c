/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:14 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/08 04:13:20 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc > 2)
	{
		stack_a = malloc(sizeof(t_stack));
		stack_b = malloc(sizeof(t_stack));
		stack_a->size = argc - 1;
		stack_a->stack = assign_to_stack_a(stack_a->size, argv);
		exit_handler(stack_a, argv);
		stack_b->size = 0;
		stack_b->stack = calloc(stack_b->size, sizeof(int));
		sort(stack_a, stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	else
	{
		ft_printf("Error:\n");
		exit(1);
	}
	return (0);
}
