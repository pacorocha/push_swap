/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_m.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:46:00 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/19 21:51:41 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	helper_swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	sort_helper(int *arr, int n)
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

void	init_pivots(int i, t_data *data)
{
	int	j;
	int	*p_i;

	p_i = ft_calloc(i, sizeof (int));
	data->pivots = ft_calloc(i, sizeof (int));
	j = 0;
	while (j < i)
	{
		p_i[j] = data->stack_a.size * (j + 1) / 4;
		data->pivots[j] = data->helper[p_i[j]];
		j++;
	}
	free(p_i);
}

void	init_helper(t_data *data)
{
	int	i;

	i = 0;
	data->helper = ft_calloc(data->stack_a.size, sizeof (int));
	while (i < data->stack_size)
	{
		data->helper[i] = data->stack_a.elems[i];
		i++;
	}
}

void	sort_hundred(t_data *data)
{
	int	i;
	int	p;

	i = 0;
	p = 3;
	init_helper(data);
	sort_helper(data->helper, data->stack_a.size);
	init_pivots(p, data);
	while (i < p)
	{
		divide_stack(i, data);
		i++;
	}
	while (data->stack_a.size > 3)
		sort_small(data);
	if (is_sorted(data->stack_a.elems, data->stack_a.size) == 0)
		sort_three(data);
	ft_putstr_fd("Stack A\nSize: ", 1);
	ft_putnbr_fd(data->stack_a.size, 1);
	ft_putstr_fd("\n", 1);
	ft_printnb_array(data->stack_a.elems, data->stack_a.size);
	ft_putstr_fd("Stack B\nSize: ", 1);
	ft_putnbr_fd(data->stack_b.size, 1);
	ft_putstr_fd("\n", 1);
	ft_printnb_array(data->stack_b.elems, data->stack_b.size);
}
