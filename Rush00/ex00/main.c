/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:27:24 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 00:37:46 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush( int x, int y );

int	main( void )
{
	rush(5, 3);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(1, 1);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(4, 4);
	write(1, "\n", 1);
	rush(123, 42);
	write(1, "\n", 1);
	rush(-4, 5);
	return (0);
}
