/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:38:33 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 12:11:14 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*char_to_hex(char c, char *buffer, unsigned int size)
{
	int		remainder;
	int		i;

	i = 0;
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
	char	buffer[4];

	i = 0;
	while (*(str + i) != '\0')
	{
		if (is_printable(*(str + i)) == 0)
		{
			write(1, "\\", 1);
			char_to_hex(*(str + i), buffer, 2);
			write(1, buffer, 2);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}

int	main( void )
{
	char	input[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(input);
	return (0);
}
