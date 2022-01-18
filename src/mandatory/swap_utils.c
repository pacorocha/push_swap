/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:51:25 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/17 23:32:08 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void swap(int *stack, int size)
{
	int	tmp;

	if (size > 1)
	{
		tmp = stack[0];
		stack[0] = stack[1];
		stack[1] = tmp;
	}
}

void	handle_swap(char *op, t_data *data)
{
	if (ft_strncmp(op, "sa", 2) == 0)
		swap(data->stack_a.elems, data->stack_a.size);
	else if (ft_strncmp(op, "sb", 2) == 0)
		swap(data->stack_b.elems, data->stack_b.size);
	else if (ft_strncmp(op, "ss", 2) == 0)
	{
		swap(data->stack_a.elems, data->stack_a.size);
		swap(data->stack_b.elems, data->stack_b.size);
	}
}
