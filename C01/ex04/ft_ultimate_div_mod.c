/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:12:15 by catperei          #+#    #+#             */
/*   Updated: 2021/01/14 18:42:05 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpa;
	int tmpb;

	tmpa = (*a / *b);
	tmpb = (*a % *b);
	*a = tmpa;
	*b = tmpb;
}
