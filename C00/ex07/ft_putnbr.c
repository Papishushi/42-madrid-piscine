/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:56:52 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 18:56:54 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize(char *buff)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		buff[i] = '\0';
		i++;
	}
}

int	ft_putnbr_sp(int *nb)
{
	char	temp;

	if (*nb < 0)
	{
		*nb *= -1;
		write(1, "-", 1);
	}
	if (*nb < 10)
	{
		temp = *nb + '0';
		write(1, &temp, 1);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	buffer[11];
	char	reverse_buffer[11];
	int		lenght;
	int		i;

	i = -1;
	lenght = 0;
	initialize(reverse_buffer);
	if (!ft_putnbr_sp(&nb))
		return ;
	while (nb >= 1)
	{
		reverse_buffer[lenght++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i <= lenght)
	{
		buffer[i] = reverse_buffer[lenght - 1 - i];
		i++;
	}
	write(1, buffer, lenght);
}

/*int	main( void )
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(427426);
	write(1, "\n", 1);
	ft_putnbr(20);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-738);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
	return (0);
}*/
