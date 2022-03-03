/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:48:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/03/02 21:49:04 by jfrancis         ###   ########.fr       */
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
		else if (data->stack_size > 3 && data->stack_size <= 10)
			sort_ten(data);
		else if (data->stack_size > 10 && data->stack_size <= 100)
			sort_hundred(data);
		else
			sort_over_hundred(data);
		destroy_stacks(data);
	}
}
