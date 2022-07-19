/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:58:47 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 02:59:18 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_counts(char *str, int *ngtv_count, int *nmbr_count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			(*nmbr_count)++;
		if ((str[i] < '0' || str[i] > '9'))
			if (str[i] != '-' && str[i] != '+')
				if (str[i] != ' ' && str[i] != '\f' && str[i] != '\n')
					if (str[i] != '\r' && str[i] != '\t' && str[i] != '\v')
						return ;
		if (str[i] == '-')
			(*ngtv_count)++;
		i++;
	}
}

int	factorize(int nmbr, int factor)
{
	int	i;

	i = 1;
	while (i < factor)
	{
		nmbr *= 10;
		i++;
	}
	return (nmbr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ngtv_count;
	int	nmbr_count;
	int	result;

	i = 0;
	ngtv_count = 0;
	nmbr_count = 0;
	result = 0;
	get_counts(str, &ngtv_count, &nmbr_count);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result += factorize(str[i] - '0', nmbr_count);
			nmbr_count--;
		}
		if (nmbr_count <= 0)
			break ;
		i++;
	}
	if (ngtv_count % 2 != 0)
		result *= -1;
	return (result);
}

/*#include <stdio.h>
int	main( void )
{
	printf("%i\n", ft_atoi("  --+-2147483647adb36"));
	printf("%i\n", ft_atoi("  --+-+0adb36"));
	printf("%i\n", ft_atoi("  --+-adb36"));
	printf("%i\n", ft_atoi("      --+126365361bdhdvgb36"));
	return (0);
}*/
