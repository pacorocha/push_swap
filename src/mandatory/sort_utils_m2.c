/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_m2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:38:25 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/28 19:16:29 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	conquer_b(t_data *data)
{
	int	biggest;
	int	index;

	biggest = find_biggest(data->stack_b.elems, data->stack_b.size);
	index = get_index(data->stack_b.elems, biggest, data->stack_b.size);
	if (index == 0)
		handle_push("pa", data);
	else
	{
		while (index != 0)
		{
			handle_rotate("rb", data);
			index = get_index(data->stack_b.elems, biggest, data->stack_b.size);
		}
		handle_push("pa", data);
	}
}

void	divide_stack(int p, t_data *data)
{
	int	i;
	int	ndl;
	int	index;
	int	distance;

	i = 0;
	while (i < data->stack_a.size)
	{
		if (data->stack_a.elems[i] <= data->pivots[p])
		{
			ndl = data->stack_a.elems[i];
			index = get_index(data->stack_a.elems, ndl, data->stack_a.size);
			distance = (data->stack_a.size * (p + 1) / 4);
			if (index != 0)
			{
				if (distance > index)
					handle_rotate("ra", data);
				else
					handle_rrotate("rra", data);
				index = get_index(data->stack_a.elems, ndl, data->stack_a.size);
			}
			else
				handle_push("pb", data);
		}
		i++;
	}
}
