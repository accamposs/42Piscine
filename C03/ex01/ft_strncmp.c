/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:38:53 by catperei          #+#    #+#             */
/*   Updated: 2021/01/21 22:29:44 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 0 && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
