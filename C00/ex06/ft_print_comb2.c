/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:06:28 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 20:43:09 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_result(int *values)
{
	char	result[5];

	result[0] = (values[0] / 10) + '0';
	result[1] = (values[0] % 10) + '0';
	result[2] = ' ';
	result[3] = (values[1] / 10) + '0';
	result[4] = (values[1] % 10) + '0';
	write(1, result, 5);
	if (values[0] + values[1] != 99 + 98)
		write(1, ", ", 2);
}

void	ft_print_comb2( void )
{
	int	values[2];

	values[0] = 0;
	while (values[0] <= 98)
	{
		values[1] = values[0] + 1;
		while (values[1] <= 99)
		{
			display_result(values);
			values[1]++;
		}
		values[0]++;
	}
}

/*
int	main( void )
{
	ft_print_comb2();
	return (0);
}*/
