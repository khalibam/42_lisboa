/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:26:46 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/28 20:26:48 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char A)
{
	write(1, &A, 1);
}

void	ft_prinumber(int a, int b, bool last)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		last;

	a = 0;
	while (a <= 14)
	{
		b = a + 1;
		while (b <= 15)
		{
			last = !(a == 14 && b == 15);
			ft_prinumber(a, b, last);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
}
