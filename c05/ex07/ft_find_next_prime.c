/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:11:13 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/22 21:20:13 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	 if (nb < 2)
	        return(0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 2189, ft_find_next_prime(2189));
	printf("%d -> %d\n", 5902, ft_find_next_prime(5902));
	printf("%d -> %d\n", 2366, ft_find_next_prime(2366));
	printf("%d -> %d\n", 261096, ft_find_next_prime(261096));
	printf("%d -> %d\n", 146410, ft_find_next_prime(146410));
	printf("%d -> %d\n", 331250, ft_find_next_prime(331250));
	printf("%d -> %d\n", 123897, ft_find_next_prime(123897));
	printf("%d -> %d\n", 14847, ft_find_next_prime(14847));
	return (0);
}*/
