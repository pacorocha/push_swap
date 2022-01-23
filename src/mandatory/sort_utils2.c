/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:03:29 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/22 23:47:37 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

int	sort_three(t_data *data)
{
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[0] < data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		return (0);
	}
	if (data->stack_a.elems[0] > data->stack_a.elems[2]
		&& data->stack_a.elems[2] > data->stack_a.elems[1])
	{
		handle_rotate("ra", data);
		return (0);
	}
	if (data->stack_a.elems[0] > data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
	{
		handle_swap("sa", data);
		handle_rrotate("rra", data);
		return (0);
	}
	if (data->stack_a.elems[0] < data->stack_a.elems[1]
		&& data->stack_a.elems[1] > data->stack_a.elems[2])
		handle_rrotate("rra", data);
	return (0);
}
