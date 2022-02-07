/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:37:58 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/30 15:34:40 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	create_stacks(t_data *data)
{
	int		i;

	i = 0;
	data->stack_a.size = data->stack_size;
	data->stack_b.size = 0;
	data->stack_a.elems = ft_calloc(data->stack_a.size, sizeof (int));
	data->stack_b.elems = ft_calloc(data->stack_b.size, sizeof (int));
	while (i < data->stack_size)
	{
		data->stack_a.elems[i] = data->stack[i];
		i++;
	}
}

void	destroy_stacks(t_data *data)
{
	data->stack_a.elems = NULL;
	data->stack_b.elems = NULL;
	free(data->stack_a.elems);
	free(data->stack_b.elems);
}
