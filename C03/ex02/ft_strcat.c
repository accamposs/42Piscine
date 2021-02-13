/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catperei <catperei@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:42:16 by catperei          #+#    #+#             */
/*   Updated: 2021/01/21 22:30:00 by catperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		(dest[len + i]) = src[i];
		i++;
	}
	(dest[len + i]) = '\0';
	return (dest);
}
