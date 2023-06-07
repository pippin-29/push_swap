/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:50:08 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/08 03:48:09 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	free(stack->stack);
	free(stack);
}

void	transform_a(t_stack *stack_a)
{
	int	*sorted;
	int	*map;
	int	i;

	sorted = malloc(sizeof(int) * stack_a->size);
	i = 0;
	while (i < stack_a->size)
	{
		sorted[i] = stack_a->stack[i];
		i++;
	}
	sort_a(sorted, stack_a->size);
	map = mapping(stack_a, sorted);
	free(sorted);
	convert_a(stack_a, map);
	free(map);
}

void	sort_a(int *sort, int size)
{
	int	temp;
	int	i;
	int	j;

	temp = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sort[i] > sort[j])
			{
				temp = sort[i];
				sort[i] = sort[j];
				sort[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*mapping(t_stack *stack_a, int *sorted)
{
	int	*map;
	int	i;
	int	j;

	map = malloc(sizeof(int) * stack_a->size);
	i = 0;
	while (i < stack_a->size)
	{
		j = 0;
		while (j < stack_a->size)
		{
			if (stack_a->stack[i] == sorted[j])
			{
				map[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (map);
}

void	convert_a(t_stack *stack_a, int *map)
{
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		stack_a->stack[i] = map[i];
		i++;
	}
}
