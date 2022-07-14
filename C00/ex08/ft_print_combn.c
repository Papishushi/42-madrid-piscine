/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:49:52 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 22:49:48 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	display_result(int *values, int n)
{
	char	result[10];

	result[0] = values[0] + '0';
	result[1] = values[1] + '0';
	result[2] = values[2] + '0';
	result[3] = values[3] + '0';
	result[4] = values[4] + '0';
	result[5] = values[5] + '0';
	result[6] = values[6] + '0';
	result[7] = values[7] + '0';
	result[8] = values[8] + '0';
	result[9] = values[9] + '0';
	write(1, result, n);
	write(1, ", ", 2);
}

void	comb_loop(int i, int n, int *values)
{
	printf("value %i %i\n",i, values[i]);
	values[i] = values[i - 1] + 1;
	while (values[i] <= 9)
	{
		if(i < n)
		{
			comb_loop(i + 1, n, values);
		}
		else
		{
			display_result(values, n);
			values[i]++;
		}
		//values[i]++;
	}
	values[i - 1]++;
}

void	ft_print_combn(int n)
{
	int	values[10];

	if (n > 0 && n < 10)
	{
		values[0] = 0;
		while (values[0] <= 9)
		{

			comb_loop(1, n, values);
		}
	}
}

int	main( void )
{
	ft_print_combn(9);
	return (0);
}

