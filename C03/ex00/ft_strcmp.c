/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:12:35 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 21:42:54 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO//Corrected

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	return (0);
}

/*#include <stdio.h>
int	main( void )
{
	printf("%i\n",ft_strcmp("Hala","Hola"));
	printf("%i\n",ft_strcmp("Hal","Hals"));
	printf("%i\n",ft_strcmp("Hola","Hala"));
	return (0);
}*/
