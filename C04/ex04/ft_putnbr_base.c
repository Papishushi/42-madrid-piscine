/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:47:04 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 17:30:13 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_invalid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i])
	{
		j = i;
		while (base[j] != '\0')
			if (base[i] == base[++j])
				return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		else
			i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght_base;

	lenght_base = 0;
	if (!is_invalid_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (base[lenght_base])
			lenght_base++;
		if (nbr < lenght_base)
			write(1, &base[nbr], 1);
		if (nbr >= lenght_base)
		{
			if (lenght_base == 0)
				lenght_base = 1;
			ft_putnbr_base(nbr / lenght_base, base);
			ft_putnbr_base(nbr % lenght_base, base);
		}
	}
}

/*#include <stdio.h>
int	main( void )
{
	ft_putnbr_base(201562, "01");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-1266343, "poneyvif");
	printf("\n");
	ft_putnbr_base(676437, "42madpisc1ne");
	printf("\n");
	ft_putnbr_base(0, "ex04");
	printf("\n");
	return (0);
}*/
