/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:41:50 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/08 08:43:21 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, const char *source, size_t n)
{
	char *result = destination;

	while (*destination)
		destination++;
	while (*source && (int)n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	*destination = '\0';
	return (result);
}