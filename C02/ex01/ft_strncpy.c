/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:24:57 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 19:50:27 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest + n);
}

/*
int	main( void )
{
	char	destination[] = "Hfsgg troll!";
	char	input[] = "Hello Wor";
	ft_strncpy(destination, input, 10);
	printf("destination:%s", destination);
	return (0);
}
*/