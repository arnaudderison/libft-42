/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:32:48 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/20 19:30:51 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordCount(const char *str, char c)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}
int	ft_countValideLetters(const char *str, char c)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str && *str != c)
	{
		str++;
		count++;
	}
	return (count);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * ft_wordCount(s, c) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = (char *)malloc(ft_countValideLetters(s, c));
			ft_strncpy(result[i], s, ft_countValideLetters(s, c));
			result[i][ft_countValideLetters(s, c)] = '\0';
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	result[i] = 0;
	return (result);
}
