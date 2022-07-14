/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:34:17 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 20:44:23 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_lenght(int nb)
{
	int	factor;
	int	lenght;

	lenght = 1;
	factor = 10;
	while (nb / factor >= 1 || nb / factor <= -1)
	{
		factor *= 10;
		lenght++;
	}
	return (lenght);
}

char	get_char(int nb, int index)
{
	char	result;
	int		factor;
	int		lenght;

	result = '0';
	lenght = 0;
	factor = 10;
	if (nb < 0)
		nb *= -1;
	while (nb / factor >= 1 || nb / factor <= -1)
	{
		if (lenght == index)
			result = (nb % factor) + '0';
		nb /= 10;
		lenght++;
	}
	if (lenght == index)
		result = nb + '0';
	return (result);
}

void	ft_putnbr(int nb)
{
	char	result[10];
	int		i;
	int		lenght;

	lenght = get_lenght(nb);
	i = 0;
	if (nb < 0)
		write(1, "-", 1);
	while (i <= lenght - 1)
	{
		result[lenght - i - 1] = get_char(nb, i);
		i++;
	}
	write(1, result, lenght);
	write(1, "\n", 3);
}

/*
int	main(void)
{
	ft_putnbr(-77464);
	return (0);
}*/
