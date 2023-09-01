/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:23:28 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/01 09:39:51 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_ptr;
	unsigned char *c_ptr;
	size_t i;

	i = -1;
	s_ptr = (unsigned char *)s;
	c_ptr = (unsigned char)c;

	while (++i < n)
	{
		if (s_ptr[i] == c_ptr)
			return (s + i);
	}
	return (NULL);
}