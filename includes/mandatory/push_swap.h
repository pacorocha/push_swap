/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:30:23 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/11 23:55:34 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libs/libft/libft.h"

typedef struct s_stack
{
	int		size;
	int		top;
	int		*elems;
}	t_stack;
typedef struct s_data
{
	int		*stack;
	int		stack_size;
	t_stack	stack_b;
	t_stack	stack_a;
}	t_data;

void	print_error(void);
int		*init_stack(int argc, int *array);
void	init_push_swap(int argc, char **argv, t_data *data);
void	check_dups(t_data *data);
int		is_sorted(int *array, int size);
void	create_stacks(t_data *data);
void	shift_els_up(int *array, int size);
void	shift_els_down(int *array, int size);
void	swap(int *stack, int size);


#endif