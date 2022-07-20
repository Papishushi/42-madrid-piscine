/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:18:06 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 20:22:12 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	if (str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char < '0' || current_char > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main( void )
{
	char	input[] = "1234";
	printf("Is numeric:%i", ft_str_is_numeric(input));
	return (0);
}*/
