/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:49:52 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 14:21:48 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_result(int *values, int n)
{
	int		i;
	char	result[10];

	i = 0;
	while (i < 10)
	{
		if (values[i] == 10 && i < n)
			return ;
		result[i] = values[i] + '0';
		i++;
	}
	write(1, result, n);
	write(1, ", ", 2);
}

void	comb_loop(int depth, int n, int *values)
{
	if (n == 1)
	{
		while (values[depth - 1] <= 9)
		{
			display_result(values, n);
			values[depth - 1]++;
		}
	}
	if (depth < n)
	{
		values[depth] = values[depth - 1] + 1;
		comb_loop(depth + 1, n, values);
		while (values[depth] <= 9)
		{
			display_result(values, n);
			values[depth]++;
		}
	}
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
			values[0]++;
		}
	}
}

int	main( void )
{
	ft_print_combn(3);
	return (0);
}
