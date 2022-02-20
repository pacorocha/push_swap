/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:59:39 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/19 22:00:52 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

int	get_index(int *haystack, int needle, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (needle == haystack[i])
			return (i);
		i++;
	}
	return (i - 1);
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

int	find_biggest(int *array, int size)
{
	int	i;
	int	b;

	i = 0;
	b = array[0];
	while (i < size)
	{
		if (array[i] > b)
			b = array[i];
		i++;
	}
	return (b);
}
