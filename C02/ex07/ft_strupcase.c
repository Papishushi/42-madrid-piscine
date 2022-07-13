/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:29:25 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 23:17:59 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char >= 'a' && current_char <= 'z')
			*(str + i) -= 32;
		i++;
	}
	return (str);
}

/*
int	main( void )
{
	char	input[] = "ABD	Fe";
	printf("Uppercase :%s", ft_strupcase(input));
	return (0);
}*/
