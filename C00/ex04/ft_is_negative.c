/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:20:13 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/15 21:26:34 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char sinal)
{
	write(1, &sinal, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else if (n >= 0)
		ft_putchar('P');
}
/*
int	main(void)
{
	ft_is_negative(-42);
	ft_putchar('\n');
}*/
