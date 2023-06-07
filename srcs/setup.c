/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:52:38 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/06 18:39:15 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*assign_to_stack_a(int size, char **argv)
{
	int	*stack;
	int	i;

	i = 0;
	stack = malloc(sizeof(int) * size);
	if (!stack)
	{
		perror("Error: Stack_A Malloc\n");
		exit(1);
	}
	while (i < size)
	{
		stack[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (stack);
}
