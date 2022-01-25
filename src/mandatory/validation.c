/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:49:09 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/24 23:28:13 by jfrancis         ###   ########.fr       */
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

int	validate_number(char **argv, int i)
{
	long int	j;

	j = 0;
	if (argv[i][0] != '-')
		if (!ft_isdigit(argv[i][0]))
			print_error();
	j = ft_atol(argv[i]);
	if (j > MAX_INT || j < MIN_INT)
		print_error();
	return (j);
}

void	init_push_swap(int argc, char **argv, t_data *data)
{
	int			i;
	long int	j;
	int			stack_size;

	i = 1;
	j = 0;
	stack_size = 0;
	data->stack = ft_calloc(argc - 1, sizeof (int));
	if (!data->stack)
		print_error();
	while (i < argc)
	{
		j = validate_number(argv, i);
		if (j == 0)
			data->stack[stack_size] = j;
		else
			data->stack[stack_size] = j;
		stack_size++;
		i++;
	}
	data->stack_size = stack_size;
	check_dups(data);
}
