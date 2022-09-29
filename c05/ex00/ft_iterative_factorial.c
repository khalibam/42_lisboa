/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:41:58 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/22 19:44:26 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		 result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
int main (void)
{
	printf("%i", ft_iterative_factorial(3));
	printf("\n");
}*/
