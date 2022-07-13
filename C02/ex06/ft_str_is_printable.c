/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:25:35 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 21:28:59 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	if (str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char < 32 || current_char > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main( void )
{
	char	input[] = "ABD	Fe";
	printf("Is printable:%i", ft_str_is_printable(input));
	return (0);
}*/
