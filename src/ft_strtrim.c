/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:00:02 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/18 16:49:08 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(const char *s)
{
	size_t	s_len;
	char	*result;

	if (!s)
		return (NULL);
	while (is_space(*s))
		s++;
	s_len = ft_strlen(s);
	while (s_len > 0 && is_space(s[s_len - 1]))
		s_len--;
	result = (char *)malloc(s_len);
	if (!result)
		return (NULL);
	ft_strncat(result, s, s_len);
	return (result);
}
