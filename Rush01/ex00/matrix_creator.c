/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_creator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:23:57 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/17 12:15:35 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef char*		t_string;
typedef t_string*	t_matrix;

t_string	*allocate_matrix(unsigned int size)
{
	t_matrix		matrix;
	unsigned int	x;
	unsigned int	y;

	y = 0;
	matrix = malloc(sizeof(matrix) + sizeof("") * size);
	while (y < size)
	{
		matrix[y] = malloc(sizeof(matrix[y]) + sizeof('\0') * size);
		x = 0;
		while (x < size)
		{
			matrix[y][x] = '0';
			x++;
		}
		y++;
	}
	return (matrix);
}
