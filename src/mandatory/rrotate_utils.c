/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:33:01 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/20 19:54:40 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	rrotate(int *stack, int size)
{
	int	tmp;
	int	i;

	i = size - 1;
	if (size > 1)
	{
		tmp = stack[size - 1];
		while (i > 0)
		{
			stack[i] = stack[i - 1];
			i--;
		}
		stack[0] = tmp;
	}
}

void	handle_rrotate(char *op, t_data *data)
{
	if (ft_strncmp(op, "rra", 3) == 0)
	{
		ft_putstr_fd("rra\n", 1);
		rrotate(data->stack_a.elems, data->stack_a.size);
	}
	else if (ft_strncmp(op, "rrb", 3) == 0)
	{
		ft_putstr_fd("rrb\n", 1);
		rrotate(data->stack_b.elems, data->stack_b.size);
	}
	else if (ft_strncmp(op, "rrr", 3) == 0)
	{
		ft_putstr_fd("rrr\n", 1);
		rrotate(data->stack_a.elems, data->stack_a.size);
		rrotate(data->stack_b.elems, data->stack_b.size);
	}
}
