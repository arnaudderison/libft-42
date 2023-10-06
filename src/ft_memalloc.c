/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:38:37 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/06 09:46:54 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	*ptr;

	ptr = (void *)malloc(sizeof(void) * size);
	if (!ptr)
		return (NULL);
	ft_memset(prt, 0, size);
	return (ptr);
}