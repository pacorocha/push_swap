/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/22 23:40:49 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	start_push_swap(t_data *data)
{
	int	i;
	if (is_sorted(data->stack, data->stack_size) == 0)
	{
		create_stacks(data);
		if (data->stack_size < 3)
			sort_two(data);
		else if (data->stack_size == 3)
			sort_three(data);
		else
		{
			if (is_reversed(data->stack, data->stack_size) == 1)
				sort_reversed(data);
			if (is_reversed(data->stack, data->stack_size) == 0)
			{
				find_smallest(data->stack_a.elems, data->stack_a.size);
			}
		}
		i = 0;
		printf("stack a\n");
		while (i <= data->stack_a.size - 1)
		{
			printf("%i\n", data->stack_a.elems[i]);
			i++;
		}
		i = 0;
		printf("stack b\n");
		while (i <= data->stack_b.size - 1)
		{
			printf("%i\n", data->stack_b.elems[i]);
			i++;
		}
		destroy_stacks(data);
	}
}
