/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_allocator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:17:03 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/17 12:17:35 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef char*		t_string;
typedef t_string*	t_matrix;

int	*allocate_inputs(t_string input, unsigned int size)
{
	int	*result;
	int	i;
	int	j;

	j = 0;
	i = 0;
	result = NULL;
	if (size > 0)
	{
		while (input[i] != '\0')
			i++;
		result = malloc(sizeof(result) + sizeof(i) * size * 4);
		i = 0;
		while (input[i] != '\0')
		{
			if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
				j++;
			else if (input[i] >= '0' && input[i] <= '9')
				result[j] = input[i] - '0';
			else
				return (NULL);
			i++;
		}
	}
	return (result);
}
