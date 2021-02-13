/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:58:17 by catperei          #+#    #+#             */
/*   Updated: 2021/01/20 20:28:08 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_hexa(char c)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 127)
		{
			to_hexa(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
