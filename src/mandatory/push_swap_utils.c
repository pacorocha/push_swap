/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/24 23:48:35 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	start_push_swap(t_data *data)
{
	if (is_sorted(data->stack, data->stack_size) == 0)
	{
		create_stacks(data);
		if (data->stack_size < 3)
			sort_two(data);
		else if (data->stack_size == 3)
			sort_three(data);
		else
		{
			int i;
			int index;
			if (is_reversed(data->stack, data->stack_size) == 1)
				sort_reversed(data);
			if (is_reversed(data->stack, data->stack_size) == 0)
			{
				find_smallest(data->stack_a.elems, data->stack_a.size);
			}
			i = find_smallest(data->stack_a.elems, data->stack_a.size);
			printf("smallest = %i\n", i);
			index = get_index(data->stack_a.elems, i, data->stack_a.size);
			printf("index: %i", index);
		}
		destroy_stacks(data);
	}
}
