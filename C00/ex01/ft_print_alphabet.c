/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:43:51 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/11 22:36:59 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet( void )
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

/*
int	main( void )
{
	ft_print_alphabet();
	return (0);
}*/
