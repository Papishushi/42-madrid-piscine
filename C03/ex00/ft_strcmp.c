/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:12:35 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 21:41:33 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp1;
	int	cmp2;
	int	i;

	cmp1 = 0;
	cmp2 = 0;
	i = 0;
	while (s1[i] != '\0')
		cmp1 += s1[i++];
	i = 0;
	while (s2[i] != '\0')
		cmp2 += s2[i++];
	return (cmp1 - cmp2);
}

/*#include <stdio.h>
int	main( void )
{
	printf("%i",ft_strcmp("HolS","Hika"));
	return (0);
}*/
