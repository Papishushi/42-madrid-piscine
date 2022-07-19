/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:52:29 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/17 12:17:49 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef char*		t_string;
typedef t_string*	t_matrix;

t_string	*allocate_matrix(unsigned int size);
int			*allocate_inputs(t_string input, unsigned int size);

void	display(t_matrix matrix, unsigned int size)
{
	unsigned int	y;

	y = 0;
	while (y < size)
	{
		write(1, matrix[y], size);
		write(1, "\n", 1);
	}
}

void	clear_resources(t_matrix matrix, int *inputs)
{
	if (inputs != NULL)
		free(inputs);
	if (matrix != NULL)
		free(matrix);
}

int	main(int c, t_string *args)
{
	int			size;
	int			*inputs;
	t_matrix	matrix;

	size = 4;
	inputs = NULL;
	matrix = NULL;
	if (c == 2)
	{
		inputs = allocate_inputs(args[1], size);
		matrix = allocate_matrix(size);
		display(matrix, size);
	}
	clear_resources(matrix, inputs);
	return (0);
}
