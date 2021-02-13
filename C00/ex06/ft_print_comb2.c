/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:11:35 by catperei          #+#    #+#             */
/*   Updated: 2021/01/13 18:28:22 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ascii(char n, int dezenas)
{
	char d;

	if (dezenas == 1)
	{
		d = n / 10 + '0';
	}
	else
	{
		d = n % 10 + '0';
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = -1;
	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar(ascii(a, 1));
			ft_putchar(ascii(a, 0));
			ft_putchar(' ');
			ft_putchar(ascii(b, 1));
			ft_putchar(ascii(b, 0));
			if (!((a == 98) && (b == 99)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
