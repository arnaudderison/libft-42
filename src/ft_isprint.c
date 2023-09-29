/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 08:51:02 by arnaud            #+#    #+#             */
/*   Updated: 2023/09/29 08:59:10 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprint(int c)
{
	return (c >= 32 && c <= 126);
}
