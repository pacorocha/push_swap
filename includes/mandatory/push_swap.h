/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:30:23 by jfrancis          #+#    #+#             */
/*   Updated: 2022/03/04 13:11:49 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT	-2147483648

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		size;
	int		top;
	int		*elems;
}	t_stack;
typedef struct s_data
{
	int		*stack;
	int		stack_size;
	int		*helper;
	int		*pivots;
	t_stack	stack_b;
	t_stack	stack_a;
}	t_data;

int			ft_isdigit(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlen(const char *s);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
long int	ft_atol(const char *nptr);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_printnb_array(int *arr, int size);

void		check_dups(t_data *data);
int			validate_number(char **argv, int i, t_data *data);
void		print_error(t_data *data);
int			*init_stack(int argc, int *array);
void		init_push_swap(int argc, char **argv, t_data *data);
void		check_dups(t_data *data);
int			is_sorted(int *array, int size);
int			find_smallest(int *array, int size);
int			find_biggest(int *array, int size);
int			get_index(int *haystack, int needle, int size);
void		create_stacks(t_data *data);
void		destroy_stacks(t_data *data);
void		swap(int *stack, int size);
void		handle_swap(char *op, t_data *data);
void		push(t_stack *stack_src, t_stack *stack_dest);
void		handle_push(char *op, t_data *datas);
void		rotate(int *stack, int size);
void		handle_rotate(char *op, t_data *data);
void		rrotate(int *stack, int size);
void		handle_rrotate(char *op, t_data *data);
void		start_push_swap(t_data *data);
void		sort_two(t_data *data);
int			sort_three(t_data *data);
void		sort_small(t_data *data);
void		sort_ten(t_data *data);
void		sort_big(int p, t_data *data);
void		helper_swap(int *x, int *y);
void		sort_helper(int *arr, int n);
void		init_pivots(int i, t_data *data);
void		divide_stack(int p, t_data *data);
void		init_helper(t_data *data);
void		conquer_b(t_data *data);
void		destroy_helpers(t_data *data);

#endif