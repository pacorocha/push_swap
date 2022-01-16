/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:42:56 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/16 15:45:48 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	push(t_stack stack_src, t_stack stack_dest)
{
	if (stack_src.size >= 1)
	{
		ft_memmove(&stack_dest.elems[1], &stack_dest.elems[0],
			sizeof(int) * stack_dest.size);
		stack_dest.elems[0] = stack_src.elems[0];
		stack_dest.size++;
		printf("stack b size: %i\n", stack_dest.size);
		stack_src.size--;
		printf("stack a size: %i\n", stack_src.size);
		ft_memmove(&stack_src.elems[0], &stack_src.elems[1],
			sizeof(int) * stack_src.size);
	}
}
