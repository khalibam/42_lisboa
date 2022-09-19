/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:10:10 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/13 15:08:55 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char numbers)
{
	write(1, &numbers, 1);
}

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
}*/
