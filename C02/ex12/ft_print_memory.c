/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 03:07:00 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 11:37:23 by dmoliner         ###   ########.fr       */
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

void	print_hex_contents(void *addr, int og_i)
{
	int		i;
	char	buffer[4];

	i = 0;
	while (i < 16)
	{
		write(1, char_to_hex(*(addr + og_i + i), buffer, 4), 4);
		write(1, ' ', 1);
		i++;
	}
}

void	print_contents(void *addr, int og_i)
{
	int		i;
	char	buffer[4];

	i = 0;
	while (i < 16)
	{
		if (is_printable(*(addr + og_i + i)))
			write(1, *(addr + og_i + i), 1);
		else
			write(1, '.', 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		write(1, (addr + i), 16);
		write(1, ': ', 2);
		print_hex_contents(addr, i);
		print_contents(addr, i);
		i += 16;
	}
	return (addr);
}
