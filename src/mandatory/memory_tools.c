/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:36:34 by jfrancis          #+#    #+#             */
/*   Updated: 2022/02/17 22:43:59 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mandatory/push_swap.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*s;

	s = b;
	while (n--)
	{
		*s++ = (unsigned char)c;
	}
	return (b);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;

	c_dest = (char *)dest;
	c_src = (char *)src;
	if ((c_dest != NULL) || (c_src != NULL))
	{
		while (n--)
		{
			*(c_dest++) = *(c_src++);
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src <= dest)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
