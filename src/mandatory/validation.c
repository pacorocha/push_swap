/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:49:09 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/20 20:49:04 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	check_dups(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->stack_size)
	{
		j = i + 1;
		while (j < data->stack_size)
		{
			if (data->stack[i] == data->stack[j])
				print_error();
			j++;
		}
		i++;
	}
	start_push_swap(data);
}

void	init_push_swap(int argc, char **argv, t_data *data)
{
	int			i;
	long int	j;
	int			stack_size;

	i = 1;
	j = 0;
	stack_size = 0;
	if (argc == 1)
		print_error();
	data->stack = ft_calloc(argc - 1, sizeof (int));
	if (!data->stack)
		print_error();
	while (i < argc)
	{
		j = ft_atol(argv[i]);
		if (!j || j > 2147483647 || j < -2147483648)
			print_error();
		else
			data->stack[stack_size] = j;
		stack_size++;
		i++;
	}
	data->stack_size = stack_size;
	check_dups(data);
}
