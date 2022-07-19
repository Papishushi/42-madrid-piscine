/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:46:55 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 22:22:28 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght;

	i = 0;
	j = 0;
	lenght = 0;
	if(*to_find == 0)
		return (str);
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
#include <string.h>
int	main( void )
{
	printf("%s",strstr("", ""));
	printf("\n");
	printf("%s",strstr("Hello World!", ""));
	printf("\n");
	printf("%s",strstr("Hello World!", "World! "));
	printf("\n");
	printf("%s",strstr("Hello World!", "Antonio"));
	printf("\n");
	printf("%s",strstr("Hello World!", " Wor"));
	printf("\n");
	printf("%s",strstr("Hello World!", "!"));
	printf("\n");
	printf("%s",strstr("Hello World!", "H"));
	printf("\n");
	printf("%s",ft_strstr("", ""));
	printf("\n");
	printf("%s",ft_strstr("Hello World!", ""));
	printf("\n");
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
