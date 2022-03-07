/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:49:09 by jfrancis          #+#    #+#             */
/*   Updated: 2022/03/04 13:13:02 by jfrancis         ###   ########.fr       */
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
				print_error(data);
			j++;
		}
		i++;
	}
	start_push_swap(data);
}

int	validate_number(char **argv, int i, t_data *data)
{
	long int	j;
	int			index;
	int			arg_size;

	j = 0;
	index = 0;
	arg_size = ft_strlen(argv[i]);
	if (argv[i][index] == '-')
		index++;
	while (index < arg_size)
	{
		if (!ft_isdigit(argv[i][index]))
			print_error(data);
		index++;
	}
	j = ft_atol(argv[i]);
	if (j > MAX_INT || j < MIN_INT)
		print_error(data);
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
		print_error(data);
	while (i < argc)
	{
		j = validate_number(argv, i, data);
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
