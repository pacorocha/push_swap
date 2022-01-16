/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:50:55 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/16 15:28:06 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	rotate(int *stack, int size)
{
	int	tmp;
	int i;

	i = 0;
	if (size > 1)
	{
		tmp = stack[0];
		while (i < size - 1)
		{
			stack[i] = stack[i + 1];
			i++;
		}
		stack[size - 1] = tmp;
	}
}
