/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:22:51 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 20:22:30 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	if (str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char < 'A' || current_char > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main( void )
{
	char	input[] = "ABDFe";
	printf("Is uppercase:%i", ft_str_is_uppercase(input));
	return (0);
}*/
