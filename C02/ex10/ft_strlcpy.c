/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:17:41 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 21:51:09 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if(i < size - 1)
		{
			if (size > 0)
				dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (i);
}

/*#include <stdio.h>
#include <string.h>
int	main( void )
{
	char	input[50] = "sad";
	char	to[] = "Hello World!";
	printf("ft_strlcpy: %u %s\n", ft_strlcpy(input, to, 0), input);
	char	input2[50] = "sad";
	char	to2[] = "Hello World!";
	printf("strlcpy: %lu %s\n", strlcpy(input2, to2, 0), input2);
	char	input3[50] = "This is a biiiiiiiiigg test!";
	char	to3[] = "My Test is Done!";
	printf("ft_strlcpy: %u %s\n", ft_strlcpy(input3, to3, 17), input3);
	char	input4[50] = "This is a biiiiiiiiigg test!";
	char	to4[] = "My Test is Done!";
	printf("strlcpy: %lu %s\n", strlcpy(input4, to4, 17), input4);
	char	input5[50] = "This is a biiiiiiiiigg test!";
	char	to5[] = "My Test is Done!";
	printf("ft_strlcpy: %u %s\n", ft_strlcpy(input5, to5, 1), input5);
	char	input6[50] = "This is a biiiiiiiiigg test!";
	char	to6[] = "My Test is Done!";
	printf("strlcpy: %lu %s\n", strlcpy(input6, to6, 1), input6);
	return (0);
}*/
