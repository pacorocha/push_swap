/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:50:55 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/20 19:54:24 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	rotate(int *stack, int size)
{
	int	tmp;
	int	i;

	i = 0;
	if (size > 1)
	{
		tmp = stack[0];
		while (i < size - 1)
		{
			stack[i] = stack[i + 1];
			i++;
		}
		stack[size - 1] = tmp;
	}
}

void	handle_rotate(char *op, t_data *data)
{
	if (ft_strncmp(op, "ra", 2) == 0)
	{
		ft_putstr_fd("ra\n", 1);
		rotate(data->stack_a.elems, data->stack_a.size);
	}
	else if (ft_strncmp(op, "rb", 2) == 0)
	{
		ft_putstr_fd("rb\n", 1);
		rotate(data->stack_b.elems, data->stack_b.size);
	}
	else if (ft_strncmp(op, "rr", 2) == 0)
	{
		ft_putstr_fd("rr\n", 1);
		rotate(data->stack_a.elems, data->stack_a.size);
		rotate(data->stack_b.elems, data->stack_b.size);
	}
}
