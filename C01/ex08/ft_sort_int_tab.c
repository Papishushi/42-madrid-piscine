/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:49:31 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/12 01:47:06 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	exchange_tab_value(int *tab, int i)
{
	int	temp;
	int	return_value;

	temp = 0;
	return_value = 0;
	if (*(tab + i) > *(tab + i + 1))
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + i + 1);
		*(tab + i + 1) = temp;
		return_value = 1;
	}
	return (return_value);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	exchange_value;

	exchange_value = 1;
	while (exchange_value == 1)
	{
		i = 0;
		exchange_value = 0;
		while (i < size)
		{
			if (i + 1 <= size)
			{
				if (exchange_tab_value(tab, i) == 1)
					exchange_value = 1;
			}
			i++;
		}
	}
}
