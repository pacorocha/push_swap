/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:15:00 by jfrancis          #+#    #+#             */
/*   Updated: 2022/01/04 21:49:54 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	print_error(void)
{
	char	*error_msg;

	error_msg = "Error";
	ft_putstr_fd(error_msg, 2);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}
