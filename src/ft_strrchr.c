/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:57:56 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/29 08:48:46 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int charac)
{
	char	*last_occurrence;

	while (*str != '\0')
	{
		if (*str == charac)
			last_occurrence = str;
		str++;
	}
	if (*str == charac)
		last_occurrence = str;
	return (last_occurrence);
}
