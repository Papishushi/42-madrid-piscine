/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:38:33 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 03:26:39 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

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

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	buffer[2];

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!is_printable(*(str + i)))
		{
			write(1, '\\', 1);
			write(1, char_to_hex(*(str + i), buffer, 2), 2);
		}
		else
			write(1, *(str + i), 1;)
	}
}

/*
int	main( void )
{
	char	input[] = "Coucou\ntu vas bien ?";
	printf("Non printable on hex: %s", ft_putstr_non_printable(input));
	return (0);
}*/
