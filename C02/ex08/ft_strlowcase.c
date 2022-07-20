/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:41:55 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 20:22:57 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		if (current_char >= 'A' && current_char <= 'Z')
			*(str + i) += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main( void )
{
	char	input[] = "aBDFe1562AAb>Z";
	printf("In lowercase:%s", ft_strlowcase(input));
	return (0);
}*/
