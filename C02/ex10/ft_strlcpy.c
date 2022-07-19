/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:17:41 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 21:38:09 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		lenght;
	char	current_char;

	i = 0;
	lenght = 0;
	while (*(src + i) != '0')
	{
		if (i < size)
		{
			current_char = *(src + i);
			*(dest + i) = *(src + i);
			i++;
		}
		lenght++;
	}
	*(dest + i) = '\0';
	return (lenght);
}

int	main( void )
{
	char	input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Capitalized: %s", ft_strlcpy(input));
	return (0);
}
