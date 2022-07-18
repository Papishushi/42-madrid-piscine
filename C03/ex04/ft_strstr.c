/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:46:55 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 23:36:35 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght;

	i = 0;
	j = 0;
	lenght = 0;
	while (to_find[lenght] != '\0')
		lenght++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (++j == lenght)
				return (str + ++i - lenght);
		}
		else if (j < lenght)
			j = 0;
		i++;
	}
	return ((void *)0);
}

/*#include <stdio.h>
int	main( void )
{
	printf("%s",ft_strstr("Hello World!", "World! "));
	printf("\n");
	printf("%s",ft_strstr("Hello World!", "Antonio"));
	printf("\n");
	printf("%s",ft_strstr("Hello World!", " Wor"));
	printf("\n");
	printf("%s",ft_strstr("Hello World!", "!"));
	printf("\n");
	printf("%s",ft_strstr("Hello World!", "H"));
	printf("\n");
	return (0);
}*/
