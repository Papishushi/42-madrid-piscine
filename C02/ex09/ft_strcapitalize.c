/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:00:17 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 21:50:58 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha_numeric(char c)
{
	if (c == '\0')
		return (0);
	if (c < 48 || c > 122)
		return (0);
	else if (c > 57 && c < 65)
		return (0);
	else if (c > 90 && c < 97)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (i == 0 || !ft_char_is_alpha_numeric(str[i - 1]))
				str[i] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (ft_char_is_alpha_numeric(str[i - 1]))
				str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main( void )
{
	char	input[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Capitalized: %s", ft_strcapitalize(input));
	return (0);
}*/
