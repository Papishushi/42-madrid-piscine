/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:37:12 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 01:54:15 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO | Works fine :/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (size >= i)
	{
		while (i < size && src[j] != '\0')
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (i);
}

/*#include <stdio.h>
int	main( void )
{
	char	dest[8] = "Hak";
	char	dest2[8] = "Ask";
	printf("%i, %s\n",ft_strlcat(dest, "", 8), dest);
	printf("%i, %s\n",ft_strlcat(dest2, "Hika", 5), dest2);
	return (0);
}*/
