/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:00:17 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 23:49:16 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_alpha(char c)
{
	if (c == '\0')
		return (1);
	if (c < 65 || c > 122)
		return (0);
	else if (c > 90 && c < 97)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	current_char;
	char	last_char;

	i = 0;
	if (*str >= 'a' && *str <= 'z')
		*(str + i) -= 32;
	while (*(str + i) != '\0')
	{
		current_char = *(str + i);
		last_char = *(str + i - 1);
		if (current_char >= 'a' && current_char <= 'z')
			if (ft_char_is_alpha(last_char) == 0)
				*(str + i) -= 32;
		i++;
	}
	return (str);
}

/*
int	main( void )
{
	char	input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Capitalized: %s", ft_strcapitalize(input));
	return (0);
}*/
