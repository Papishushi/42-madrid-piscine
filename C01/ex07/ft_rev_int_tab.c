/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:01:21 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 13:55:44 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while ((size + -i) > size / 2)
	{
		temp = tab[i];
		*(tab + i) = *(tab + ri);
		*(tab + size + -i) = temp;
		i++;
	}
}
