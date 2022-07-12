/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:49:52 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/12 15:02:26 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb_loop(int n, int lv, int i)
{
	int		value;
	char	parsed;

	value = 0;
	if (i != 0)
	{
		value = lv + 1;
	}
	while (value <= 9)
	{
		if (i != n)
		{
			comb_loop(n, value, i + 1);
		}
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		comb_loop(n, 0, 0);
	}
}
