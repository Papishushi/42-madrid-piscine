/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:38:33 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 20:40:17 by dmoliner         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	buffer[2];

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 0)
			*(str + i) += 128;
		if (is_printable(*(str + i)) == 0)
		{
			write(1, "\\", 1);
			char_to_hex(*(str + i), buffer);
			write(1, buffer, 2);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}

/*
int	main( void )
{
	char	input[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(input);
	return (0);
}*/
