/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_m_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:43:48 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/04 23:12:02 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

static void	helper_swap(int* x, int* y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

static void	sort_helper(int *arr, int n)
{
	int	i;
	int	j;
	int	sm;

	i = 0;
	while (i < n - 1)
	{
		sm = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[sm])
				sm = j;
			j++;
		}
		helper_swap(&arr[sm], &arr[i]);
		i++;
	}
}

// Driver code
void	sort_hundred(t_data *data)
{
    int *tmp;
	int i = 0;
	int pivot[3];
	int p_i[3];
	int	j;

	tmp = ft_calloc(data->stack_a.size, sizeof (int));
	while (i < data->stack_size)
	{
		tmp[i] = data->stack_a.elems[i] ;
		i++;
	}
	sort_helper(tmp, data->stack_a.size);
	p_i[0] = data->stack_a.size / 4;
	pivot[0] = tmp[p_i[0]];
	p_i[1] = data->stack_a.size / 2;
	pivot[1] = tmp[p_i[1]];
	p_i[2] = data->stack_a.size * (3/4) ;
	pivot[2] = tmp[p_i[2]];
	i = 0;
	j = 0;
	while (j < data->stack_a.size)
	{
		if (tmp[j] <= pivot[0])
			divide_by_pivot(data->stack_a, tmp[j], data);
		j++;
		i++;
	}
	j = 0;
	while (j < data->stack_a.size - i)
	{
		if (tmp[j] <= pivot[1])
			divide_by_pivot(data->stack_a, tmp[j], data);
		j++;
		i++;
	}
	j = 0;
	while (j < data->stack_a.size - i)
	{
		if (tmp[j] <= pivot[2])
			divide_by_pivot(data->stack_a, tmp[j], data);
		j++;
		i++;
	}
}
