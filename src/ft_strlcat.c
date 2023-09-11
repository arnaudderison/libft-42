/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:44:49 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/08 11:17:44 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t dest_len = ft_strlen(destination);
	size_t source_len = ft_strlen(source);
	size_t total_len = dest_len + source_len;

	if (size <= dest_len)
		return (total_len);

	size_t copy_len = size - dest_len - 1;
	ft_strncat(destination, source, copy_len);
	destination[size - 1] = '\0';
	return (total_len);
}