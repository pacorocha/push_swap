/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:03:29 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/25 21:41:31 by jfrancis         ###   ########.fr       */
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
			break ;
		i++;
	}
	return (i);
}
