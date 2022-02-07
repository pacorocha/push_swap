/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:30:23 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/01 22:09:41 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT	-2147483648

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
int		find_smallest(int *array, int size);
int		get_index(int *haystack, int needle, int size);
void	create_stacks(t_data *data);
void	destroy_stacks(t_data *data);
void	swap(int *stack, int size);
void	handle_swap(char *op, t_data *data);
void	push(t_stack *stack_src, t_stack *stack_dest);
void	handle_push(char *op, t_data *datas);
void	rotate(int *stack, int size);
void	handle_rotate(char *op, t_data *data);
void	rrotate(int *stack, int size);
void	handle_rrotate(char *op, t_data *data);
void	start_push_swap(t_data *data);
void	sort_two(t_data *data);
void	sort_three(t_data *data);
void	sort_small(t_data *data);
void	sort_ten(t_data *data);

#endif