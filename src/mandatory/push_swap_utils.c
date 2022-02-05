/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/30 15:36:03 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	start_push_swap(t_data *data)
{
	if (is_sorted(data->stack, data->stack_size) == 0)
	{
		create_stacks(data);
								int i = 0;
				printf("stack a size: %i\n", data->stack_a.size);
				printf("stack b size: %i\n", data->stack_b.size);
			printf("stack a\n");
			while (i <= data->stack_a.size)
			{
				printf("%i\n", data->stack_a.elems[i]);
				i++;
			}
			i = 0;
			printf("stack b\n");
			while (i <= data->stack_b.size)
			{
				printf("%i\n", data->stack_b.elems[i]);
				i++;
			}
		if (data->stack_size < 3)
			sort_two(data);
		else if (data->stack_size == 3)
			sort_three(data);
		else if (data->stack_size > 3)
		{
			if (data->stack_size <= 10)
				sort_ten(data);
			if (data->stack_size > 10)
			{
				sort_hundred(data);
			}
		}
								i = 0;
				printf("stack a size: %i\n", data->stack_a.size);
				printf("stack b size: %i\n", data->stack_b.size);
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
