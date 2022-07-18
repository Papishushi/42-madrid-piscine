/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:12:35 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 18:02:10 by dmoliner         ###   ########.fr       */
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
	{
		cmp1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		cmp2 += s2[i];
		i++;
	}
	return (cmp1 - cmp2);
}

#include <stdio.h>
int	main( void )
{
	printf("%i",ft_strcmp("H","H"));
	return (0);
}
