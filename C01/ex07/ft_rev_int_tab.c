/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:01:21 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/15 03:23:18 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	temp;

	temp = 0;
	i = 0;
	ri = size;
	while (ri > size / 2)
	{
		temp = tab[i];
		*(tab + i) = *(tab + ri);
		*(tab + ri) = temp;
		i++;
		ri--;
	}
}
