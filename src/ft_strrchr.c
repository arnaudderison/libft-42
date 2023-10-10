/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:57:56 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/10 23:12:06 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int charac)
{
	char	*last_occurrence;

	while (*str != '\0')
	{
		if (*str == charac)
			last_occurrence = (char *)str;
		str++;
	}
	if (*str == charac)
		last_occurrence = (char *)str;
	return (last_occurrence);
}
