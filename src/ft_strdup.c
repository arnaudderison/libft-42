/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:42:18 by arnaud            #+#    #+#             */
/*   Updated: 2023/08/30 10:09:05 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int str_len;
	char *dup;
	int i;

	i = -1;
	str_len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!dup)
		return (NULL);
	dup[str_len] = '\0';
	while (++i < str_len)
		dup[i] = str[i];
	return (dup);
}