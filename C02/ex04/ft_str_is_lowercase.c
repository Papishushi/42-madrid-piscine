/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:20:54 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 20:22:21 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	if (str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char < 'a' || current_char > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main( void )
{
	char	input[] = "abdec";
	printf("Is lowercase:%i", ft_str_is_lowercase(input));
	return (0);
}*/
