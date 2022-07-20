/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:24:57 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 20:21:48 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO | Corrected

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i < n)
		while (dest[i] != '\0')
			*(dest + i++) = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main( void )
{
	char	destination[] = "Hfsgg troll!";
	char	input[] = "Hello Wor";
	printf("destination:%s\n", ft_strncpy(destination, input, 1));
	char	destination2[] = "Hfsgg troll!";
	char	input2[] = "Hello Wor";
	printf("destination:%s\n", strncpy(destination2, input2, 1));
	return (0);
}*/
