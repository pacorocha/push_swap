/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:51:25 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/09 19:02:08 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void swap(int *stack, int size)
{
	int	tmp;

	if (size > 1)
	{
		tmp = stack[0];
		stack[0] = stack[1];
		stack[1] = tmp;
	}
}
