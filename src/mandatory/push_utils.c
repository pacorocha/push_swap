/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:42:56 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/17 23:19:39 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	push(t_stack *stack_src, t_stack *stack_dest)
{
	if (stack_src->size != 0)
	{
		ft_memmove(&stack_dest->elems[1], &stack_dest->elems[0],
			sizeof(int) * stack_dest->size);
		stack_dest->elems[0] = stack_src->elems[0];
		stack_dest->size++;
		stack_src->size--;
		ft_memmove(&stack_src->elems[0], &stack_src->elems[1],
			sizeof(int) * stack_src->size);
	}
}

void	handle_push(char *op, t_data *data)
{
	if (ft_strncmp(op, "pa", 2) == 0)
		push(&data->stack_b, &data->stack_a);
	else if (ft_strncmp(op, "pb", 2) == 0)
		push(&data->stack_a, &data->stack_b);
}
