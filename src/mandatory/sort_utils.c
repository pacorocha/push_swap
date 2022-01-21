/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:01:13 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/20 21:31:40 by jfrancis         ###   ########.fr       */
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

int	is_reversed(int *array, int size)
{
	int	start;
	int	end;
	int tmp;

	start = 0;
	end = size -1;
    while (start < end)
    {
        tmp = array[start];
        array[start] = array[end];
        array[end] = tmp;
		start++,
		end--;
    }
	if (is_sorted(array, size) == 1)
		return (1);
	else
		return (0);
}

void sort_reversed(t_data *data)
{
	int i = 0;
	while (i < data->stack_size - 1)
	{
		handle_rrotate("rra", data);
		handle_push("pb", data);
		i++;
	}
	i = 0;
	while (i < data->stack_size)
	{
		handle_push("pa", data);
		i++;
	}
}

int	find_smallest(int *array, int size)
{
	int i;
	int	sm;

	i = 0;
	sm = MAX_INT;
	while (i < size)
	{
		if (array[i] < sm)
			sm = array[i];
		i++;
	}
	return (sm);
}
