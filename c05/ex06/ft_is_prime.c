/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:03:34 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/22 21:09:31 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 234, ft_is_prime(234));
	printf("%d -> %d\n", 235, ft_is_prime(235));
	printf("%d -> %d\n", 236, ft_is_prime(236));
	printf("%d -> %d\n", 237, ft_is_prime(237));
	printf("%d -> %d\n", 238, ft_is_prime(238));
	printf("%d -> %d\n", 239, ft_is_prime(239));
	printf("%d -> %d\n", 240, ft_is_prime(240));
	printf("%d -> %d\n", 241, ft_is_prime(241));
	printf("%d -> %d\n", 242, ft_is_prime(242));
	return (0);
}*/
