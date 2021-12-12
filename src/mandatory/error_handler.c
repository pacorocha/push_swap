/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:15:00 by jfrancis          #+#    #+#             */
/*   Updated: 2021/12/12 15:52:52 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	print_error(int id_error)
{
	char	*error_msg;

	error_msg = 0;
	if (id_error == 1)
		error_msg = "Error: All arguments must be integers";
	ft_putstr_fd(error_msg, 2);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}
