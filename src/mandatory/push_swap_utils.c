/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/26 21:32:04 by jfrancis         ###   ########.fr       */
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
		else if (data->stack_size > 3 && data->stack_size < 10)
		{
			while (data->stack_a.size > 3)
			{
				sort_small(data);
			}
			if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
				sort_three(data);
			if (data->stack_b.size > 0)
			{
				while(data->stack_b.size > 0)
				{
					handle_push("pa", data);
				}
			}
		}
		destroy_stacks(data);
	}
}
