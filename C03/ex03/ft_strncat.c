/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:36:39 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 21:33:01 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main( void )
{
	char	dest[8] = "Hak";
	printf("%s",ft_strncat(dest, "Hika", 2));
	return (0);
}*/
