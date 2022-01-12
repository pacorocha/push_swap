/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:01:13 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/08 18:22:41 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

int	is_sorted(int *array, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
