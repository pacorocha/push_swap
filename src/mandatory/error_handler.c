/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:15:00 by jfrancis          #+#    #+#             */
/*   Updated: 2022/03/04 13:08:16 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	print_error(t_data *data)
{
	char	*error_msg;

	error_msg = "Error";
	ft_putstr_fd(error_msg, 2);
	write(2, "\n", 1);
	free(data->stack);
	exit(EXIT_FAILURE);
}
