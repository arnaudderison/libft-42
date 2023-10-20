/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:27:16 by arnaud            #+#    #+#             */
/*   Updated: 2023/10/20 17:03:09 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include <stdio.h>

void	main(void)
{
	char **buff;
	int i;

	printf("RESULT: |%d|\n", ft_atoi("465"));
	buff = ft_strsplit(" ", ' ');

	i = 0;
	while (buff && buff[i])
	{
		printf("RESULT: |%s|", buff[i]);
		i++;
	}
}