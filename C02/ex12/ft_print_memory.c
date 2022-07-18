/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 03:07:00 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 14:07:25 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hex(unsigned char a, char *buf)
{
	char	*data;
	char	temp;
	int		i;
	int		j;

	data = "0123456789abcdef";
	*buf = '0';
	*(buf + 1) = '0';
	i = 0;
	while (a)
	{
		buf[i] = data[a % 16];
		a /= 16;
		i++;
	}
	j = 0;
	while (j < i)
	{
		temp = buf[j];
		buf[j] = buf[i];
		buf[i] = temp;
		i--;
		j++;
	}
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
	char	buffer[2];

	i = 0;
	while (i < 16)
	{
		char_to_hex(*((char *)(addr + og_i + i)), buffer);
		write(1, buffer, 2);
		write(1, " ", 1);
		i++;
	}
}

void	print_contents(void *addr, int og_i)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (is_printable(*((char *)(addr + og_i + i))))
			write(1, addr + og_i + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < size)
	{
		write(1, addr + i, 16);
		write(1, ": ", 2);
		print_hex_contents(addr, i);
		print_contents(addr, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int	main( void )
{
	char	input[39] = "Hello	world! My name is Daniel	lol		lol";
	ft_print_memory(input, 39);
	return (0);
}*/
