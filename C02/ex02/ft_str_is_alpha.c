/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:50:54 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/18 14:20:46 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	if (str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char < 65 || current_char > 122)
			return (0);
		else if (current_char > 90 && current_char < 97)
			return (0);
		i++;
	}
	return (1);
}

/*int	main( void )
{
	char	input[] = "Hello Wor";
	printf("Is alpha:%i", ft_str_is_alpha(input));
	return (0);
}*/
