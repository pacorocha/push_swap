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
		if (data->stack_size < 3)
			sort_two(data);
		else if (data->stack_size == 3)
			sort_three(data);
		else if (data->stack_size > 3 && data->stack_size <= 10)
			sort_ten(data);
		destroy_stacks(data);
	}
}
