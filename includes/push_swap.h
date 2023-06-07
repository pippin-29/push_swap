/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <daniel42.c@engineer.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 05:25:29 by dhadding          #+#    #+#             */
/*   Updated: 2023/06/08 03:54:12 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int		*stack;
	int		size;
}	t_stack;

/* EXIT.C */
void	exit_handler(t_stack *stack_a, char **argv);
void	chk_dup(t_stack *stack);
void	chk_int(char **argv);
void	chk_min_max(char **argv);

/* PROGRAM.C */
void	sort(t_stack *stack_a, t_stack *stack_b);
void	sort_small_stack(t_stack *stack_a, t_stack *stack_b);
void	sort_big_stack(t_stack *stack_a, t_stack *stack_b);

/* PUSH.C */
int		pop(t_stack *stack);
void	push(t_stack *stack, int popped);
int		push_a(t_stack *stack_a, t_stack *stack_b);
int		push_b(t_stack *stack_b, t_stack *stack_a);

/* REV_ROTATE.C */
void	rev_rotate_a(t_stack *stack_a);
void	rev_rotate_b(t_stack *stack_b);
void	rev_rotate_r(t_stack *stack_a, t_stack *stack_b);

/* ROTATE.C */
void	rotate_a(t_stack *stack_a);
void	rotate_b(t_stack *stack_b);
void	rotate_r(t_stack *stack_a, t_stack *stack_b);

/* SETUP.C */
int		*assign_to_stack_a(int size, char **argv);

/* SORT_2_5.C */
void	sort_2(t_stack *stack_a);
void	sort_3(t_stack *stack_a);
void	sort_4(t_stack *stack_a, t_stack *stack_b);
void	sort_4_help(t_stack *stack_a, t_stack *stack_b);
void	sort_5(t_stack *stack_a, t_stack *stack_b);

/* SWAP.C */
void	swap_a(t_stack *stack_a);
void	swap_b(t_stack *stack_b);
void	swap_s(t_stack *stack_a, t_stack *stack_b);

/* UTILS.C */
void	free_stack(t_stack *stack);
void	transform_a(t_stack *stack_a);
void	sort_a(int *sort, int size);
int		*mapping(t_stack *stack_a, int *sorted);
void	convert_a(t_stack *stack_a, int *map);

/* UTILS_2.C */
int		index_of_min(t_stack *stack);
int		check_sort(t_stack *stack_a);
int		bit_width(t_stack *stack_a);

#endif