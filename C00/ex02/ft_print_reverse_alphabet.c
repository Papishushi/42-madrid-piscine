/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:01:38 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/14 19:18:23 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet( void )
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

/*
int	main( void )
{
	ft_print_reverse_alphabet();
	return (0);
}*/
