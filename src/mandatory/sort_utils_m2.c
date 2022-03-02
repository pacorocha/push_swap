/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_m2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:38:25 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/28 19:16:29 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	conquer_b(t_data *data)
{
	int	biggest;
	int	index;

	biggest = find_biggest(data->stack_b.elems, data->stack_b.size);
	index = get_index(data->stack_b.elems, biggest, data->stack_b.size);
	if (index == 0)
		handle_push("pa", data);
	else
		handle_rotate("rb", data);
}

void	divide_stack(int p, t_data *data)
{
	int	i;
	int size;

	i = 0;
	size = data->stack_a.size;
	while (i < size)
	{
		if (data->stack_a.elems[i] <= data->pivots[p])
			handle_push("pb", data);
		else
			handle_rotate("ra", data);
		i++;
	}
}
