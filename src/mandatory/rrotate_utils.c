/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:33:01 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/16 15:38:56 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	rrotate(int *stack, int size)
{
	int	tmp;
	int i;

	i = size - 1;
	if (size > 1)
	{
		tmp = stack[size - 1];
		while (i > 0)
		{
			stack[i] = stack[i - 1];
			i--;
		}
		stack[0] = tmp;
	}
}
