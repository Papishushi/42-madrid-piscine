/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:38:33 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 14:14:13 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (!is_printable(*(str + i)))
		{
			write(1, "\\", 1);
			buffer[0] = "0123456789abcdef"[*(str + i) / 16];
			buffer[1] = "0123456789abcdef"[*(str + i) % 16];
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
	char	input[] = "Coucou\ntu vas	bien ?";
	ft_putstr_non_printable(input);
	return (0);
}*/
