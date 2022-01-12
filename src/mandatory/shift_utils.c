/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:18:01 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/09 20:10:09 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	shift_els_up(int *array, int size)
{
	int i;

	i = size;
	while (--i >= 0)
	{
		array[i + 1] = array[i];
	}
}

void	shift_els_down(int *array, int size)
{
	int i;

	i = size;
	while (i >= 0)
	{
		array[i - 1] = array[i];
		i--;
	}
}
