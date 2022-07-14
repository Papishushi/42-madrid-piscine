/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 03:07:00 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 03:35:41 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*char_to_hex(char c, char *buffer, unsigned int size)
{
	int		remainder;
	int		i;

	while (c != 0)
	{
		remainder = c % 16;
		if (remainder < 10)
			*(buffer + size - i) = 48 + remainder;
		else
			*(buffer + size - i) = 55 + remainder;
		c = c / 16;
		i++;
	}
	return (buffer);
}

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		indexes[3];
	char	buffer[4];

	indexes[0] = 0;
	while (indexes[0] < size)
	{
		write(1, (addr + indexes[0]), 16);
		write(1, ': ', 2);
		indexes[1] = 0;
		while (indexes[1] < 16)
		{
			write(1, char_to_hex(*(addr + indexes[0] + indexes[1]), buffer, 4), 4);
			write(1, ' ', 1);
			indexes[1]++;
		}
		indexes[2] = 0;
		while (indexes[2] < 16)
		{
			if (is_printable(*(addr + indexes[0] + indexes[2])))
				write(1, *(addr + indexes[0] + indexes[2]), 1);
			else
				write(1, '.', 1);
			indexes[2]++;
		}
		indexes[0] += 16;
	}
	return (addr);
}
