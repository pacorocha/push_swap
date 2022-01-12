/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:42:56 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/09 20:09:45 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	push(t_stack *stack_src, t_stack *stack_dest)
{
	shift_els_up(stack_dest->elems, stack_dest->size);
	stack_dest->top++;
	stack_dest[0] = stack_src[0];
	shift_els_down(stack_src->elems, stack_src->size);
	stack_src->top--;
}
