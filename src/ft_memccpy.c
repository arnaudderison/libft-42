/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:36:50 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/01 09:54:42 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned char		c_char;
	size_t				i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	c_char = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		dest_ptr[i] = src_ptr[i];
		if (c_char == src_ptr[i])
			return (dest + i + 1);
	}
	return (NULL);
}
