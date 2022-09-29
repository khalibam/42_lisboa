/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdos-san <bdos-san@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:07:07 by bdos-san          #+#    #+#             */
/*   Updated: 2022/09/20 17:24:11 by bdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int b, int r, int a)
{
	b = b + 48;
	r = r + 48;
	a = a + 48;
	write(1, &b, 1);
	write(1, &r, 1);
	write(1, &a, 1);
	if (b < '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		b;
	int		r;
	int		a;

	b = 0;
	while (b <= 7)
	{
		r = b + 1;
		while (r <= 8)
		{
			a = r + 1;
			while (a <= 9)
			{	
				ft_putchar(b, r, a);
				a++;
			}
			r++;
		}
			b++;
	}
}

int	main(void)
{
	ft_print_comb();
}
