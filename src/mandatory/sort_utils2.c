/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:03:29 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/24 23:45:43 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

int	find_smallest(int *array, int size)
{
	int	i;
	int	sm;

	i = 0;
	sm = array[0];
	while (i < size)
	{
		if (array[i] < sm)
			sm = array[i];
		i++;
	}
	return (sm);
}

int	get_index(int *haystack, int needle, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (needle == haystack[i])
			break;
		i++;
	}
	return (i);
}
