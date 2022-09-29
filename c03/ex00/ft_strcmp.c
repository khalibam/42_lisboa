/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:57:22 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/21 23:44:48 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d", ft_strcmp("Ola", "Ola1"));
	printf("\n%d", ft_strcmp("Ola", "Ele"));
	printf("\n%d", ft_strcmp("Ele", "Ola"));
	printf("\n%d", ft_strcmp("Ola", "Ola"));
	printf("\n");
}*/
