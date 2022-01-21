/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/20 20:58:29 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	start_push_swap(t_data *data)
{
	if (is_sorted(data->stack, data->stack_size) == 0)
	{
		create_stacks(data);
		if (is_reversed(data->stack, data->stack_size) == 1)
			sort_reversed(data);
		else
		{
			find_smallest(data->stack_a.elems, data->stack_a.size);
		}
	}
}
