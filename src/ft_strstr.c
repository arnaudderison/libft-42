/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:55:13 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/08 09:03:54 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i])
		{
			if (*str++ == to_find[i++])
				return (str);
		}
	}
	return (NULL);
}