/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:31:22 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 01:43:56 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO | Corrected

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
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
	printf("%i\n",ft_strncmp("Habe", "Haba", 3));
	printf("%i\n",ft_strncmp("Habe", "Haba", 4));
	printf("%i\n",ft_strncmp("Habe", "Haeba", 3));
	return (0);
}*/
