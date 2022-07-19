/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:56:03 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 21:33:10 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main( void )
{
	char	dest[8] = "Hak";
	printf("%s",ft_strcat(dest, "Hika"));
	return (0);
}*/
