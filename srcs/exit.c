/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 06:15:43 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/07 04:31:36 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	exit_handler(t_stack *stack_a, char **argv)
{
	chk_int(argv);
	chk_min_max(argv);
	chk_dup(stack_a);
}

void	chk_dup(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size - 1)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack->stack[i] == stack->stack[j])
			{
				ft_printf("Error:\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	chk_int(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9'))
			{
				ft_printf("Error:\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	chk_min_max(char **argv)
{
	int			i;
	long int	c;

	i = 1;
	while (argv[i])
	{
		c = ft_latoi(argv[i]);
		if (c < INT_MIN || c > INT_MAX)
		{
			ft_printf("Error:\n");
			exit(1);
		}
		i++;
	}
}
