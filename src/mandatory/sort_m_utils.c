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

static void	push_to_b(int *tmp, t_data *data) {
	int pivot[3];
	int p_i[3];
	int j;
	int i;

	i = 0;
	while (i <= 2 && data->stack_a.size > 3)
	{
		j = 0;
		p_i[i] = data->stack_a.size * (i + 1) / 4;
		pivot[i] = tmp[p_i[i]];
		while (j < data->stack_a.size)
		{
			if (tmp[j] <= pivot[i])
				divide_by_pivot(data->stack_a, tmp[j], data);
			j++;
		}
		i++;
	}
	if (data->stack_a.size < 3)
		sort_two(data);
	else if (data->stack_a.size == 3)
		sort_three(data);
	i = 0;
	while (i < data->stack_b.size)
	{
		if (data->stack_b.elems[0] < data->stack_b.elems[1])
			handle_swap("sb", data);
		else
			handle_push("pa", data);
	}
}

void	sort_hundred(t_data *data)
{
    int *tmp;
	int i;

	i = 0;

	tmp = ft_calloc(data->stack_a.size, sizeof (int));
	while (i < data->stack_size)
	{
		tmp[i] = data->stack_a.elems[i] ;
		i++;
	}
	sort_helper(tmp, data->stack_a.size);
	push_to_b(tmp, data);
}
