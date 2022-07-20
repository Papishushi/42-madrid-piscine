/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:17:41 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 02:09:02 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		lenght;

	i = 0;
	lenght = 0;
	while (*(src + i) != '0')
	{
		if (i < size)
		{
			dest[i] = src[i];
			i++;
		}
		lenght++;
	}
	dest[i] = '\0';
	return (lenght);
}
//#include <stdio.h>
