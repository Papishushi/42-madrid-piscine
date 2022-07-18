/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:31:22 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 22:34:29 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	cmp1;
	int	cmp2;
	int	i;

	cmp1 = 0;
	cmp2 = 0;
	i = 0;
	while (s1[i] != '\0' && i < n)
		cmp1 += s1[i++];
	i = 0;
	while (s2[i] != '\0' && i < n)
		cmp2 += s2[i++];
	return (cmp1 - cmp2);
}

/*#include <stdio.h>
int	main( void )
{
	printf("%i",ft_strncmp("Hak", "Hika", 3));
	return (0);
}*/
