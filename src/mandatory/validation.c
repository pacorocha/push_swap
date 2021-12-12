/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:49:09 by jfrancis          #+#    #+#             */
/*   Updated: 2021/12/12 15:51:45 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void init_push_swap(int argc, char **argv)
{
	int i;
	int j;
	int num_len;

	i = 1;
	j = 0;
	num_len = 0;
	while (i < argc)
	{
		num_len = ft_strlen(argv[i]);
		while (j < num_len)
		{
			if (argv[i][0] == '-')
				j++;
			if (!ft_isdigit(argv[i][j]))
				print_error(1);
			j++;
		}
		i++;
	}
}
