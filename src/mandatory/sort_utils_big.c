/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:54:43 by jfrancis          #+#    #+#             */
/*   Updated: 2022/03/02 22:42:49 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	sort_over_hundred(t_data *data)
{
	int	i;
	int	p;

	i = 0;
	p = 8;
	init_helper(data);
	sort_helper(data->helper, data->stack_a.size);
	init_pivots(p, data);
	while (i <= p)
	{
		divide_stack(i, data);
		i++;
	}
	free(data->helper);
	while (data->stack_b.size > 0)
		conquer_b(data);
	free(data->pivots);
}
