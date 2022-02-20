/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:03:29 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/19 22:01:23 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

int	is_sorted(int *array, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	sort_two(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1])
		handle_swap("sa", data);
}

int	sort_three(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[0] < data->stack_a.elems[2])
		handle_swap("sa", data);
	else if (data->stack_a.elems[0] > data->stack_a.elems[2]
		&& data->stack_a.elems[2] > data->stack_a.elems[1])
		handle_rotate("ra", data);
	else if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		handle_rrotate("rra", data);
		return (0);
	}
	else if (data->stack_a.elems[0] < data->stack_a.elems[1]
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

void	sort_ten(t_data *data)
{
	while (data->stack_a.size > 3)
		sort_small(data);
	if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
		sort_three(data);
	if (data->stack_b.size > 0)
	{
		while (data->stack_b.size > 0)
			handle_push("pa", data);
	}
}
