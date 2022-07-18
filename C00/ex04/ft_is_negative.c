/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:08:25 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 13:38:28 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative( int n )
{
	char	result;

	result = 'N';
	if (n >= 0)
		result = 'P';
	write (1, &result, 1);
}

/*
int	main( void )
{
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(10083);
	write(1, "\n", 1);
	ft_is_negative(-10083);
	write(1, "\n", 1);
	return (0);
}*/
