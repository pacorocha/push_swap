/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:01:13 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/30 15:39:10 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	sort_two(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1])
		handle_swap("sa", data);
}

void	sort_three(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[0] < data->stack_a.elems[2])
		handle_swap("sa", data);
	if (data->stack_a.elems[0] > data->stack_a.elems[2]
		&& data->stack_a.elems[2] > data->stack_a.elems[1])
		handle_rotate("ra", data);
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		handle_rrotate("rra", data);
	}
	if (data->stack_a.elems[0] < data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_rrotate("rra", data);
		if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
			handle_swap("sa", data);
	}
}

void	sort_ten(t_data *data)
{
	int	sm;

	while (data->stack_a.size > 3)
	{
		sm = find_smallest(data->stack_a.elems, data->stack_a.size);
		divide_by_pivot(data->stack_a, sm, data);
	}
	if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
		sort_three(data);
	if (data->stack_b.size > 0)
	{
		while (data->stack_b.size > 0)
			handle_push("pa", data);
	}
}

void	divide_by_pivot(t_stack stack, int pivot, t_data *data)
{
	int	index;
	int	distance;

	index = get_index(stack.elems, pivot, stack.size);
	distance = (stack.size / 2);
	while (index != 0)
	{
		if (distance > index)
			handle_rotate("ra", data);
		else
			handle_rrotate("rra", data);
		index = get_index(stack.elems, pivot, stack.size);
	}
	handle_push("pb", data);
}

void	sort_ten(t_data *data)
{
	while (data->stack_a.size > 3)
		sort_small(data);
	if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
		sort_three(data);
	if (data->stack_b.size > 0)
	{
		while(data->stack_b.size > 0)
			handle_push("pa", data);
	}
}
