/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:01:13 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/26 21:31:19 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	sort_two(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1])
		handle_swap("sa", data);
}

int	sort_three(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[0] < data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		return (0);
	}
	if (data->stack_a.elems[0] > data->stack_a.elems[2]
		&& data->stack_a.elems[2] > data->stack_a.elems[1])
	{
		handle_rotate("ra", data);
		return (0);
	}
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		handle_rrotate("rra", data);
		return (0);
	}
	if (data->stack_a.elems[0] < data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_rrotate("rra", data);
		if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
			handle_swap("sa", data);
	}
	return (0);
}

void	sort_small(t_data *data)
{
	int	smallest;
	int	index;
	int	distance;

	smallest = find_smallest(data->stack_a.elems, data->stack_a.size);
	index = get_index(data->stack_a.elems, smallest, data->stack_a.size);
	distance = (data->stack_a.size / 2);
	while (index != 0)
	{
		if (distance > index)
			handle_rotate("ra", data);
		else
			handle_rrotate("rra", data);
		index = get_index(data->stack_a.elems, smallest, data->stack_a.size);
	}
	handle_push("pb", data);
}
