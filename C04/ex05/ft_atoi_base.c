/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:45:50 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/19 18:46:53 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterative solution (Repeat this process for each digit of the base number)
// result += digit_base_index * base_lenght^input_position

int	get_i(char cbase, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == cbase)
			return (i);
		i++;
	}
	return (-1);
}

int	pw(int nmbr, int p)
{
	int	i;
	int	result;

	i = 1;
	if(p == 0)
		return (1);
	result = nmbr;
	while (i++ < p)
		result *= nmbr;
	return (result);
}

int	is_invalid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i])
	{
		j = i;
		while (base[j] != '\0')
			if (base[i] == base[++j])
				return (1);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		else
			i++;
	}
	return (0);
}

int	get_counts(char *str, int *ngtv_count, int *nmbr_count)
{
	int	i;
	int	nmbr_i;

	i = 0;
	nmbr_i = -1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			(*nmbr_count)++;
			nmbr_i = i;
		}
		if ((str[i] < '0' || str[i] > '9'))
			if (str[i] != '-' && str[i] != '+')
				if (str[i] != ' ' && str[i] != '\f' && str[i] != '\n')
					if (str[i] != '\r' && str[i] != '\t' && str[i] != '\v')
						return (nmbr_i);
		if (str[i] == '-')
			(*ngtv_count)++;
		i++;
	}
	return (nmbr_i);
}

#include <stdio.h>
int	ft_atoi_base(char *str, char *base)
{
	int	lbase;
	int	ng_c;
	int	nb_c;
	int	result;
	int	nb_strt;

	ng_c = 0;
	nb_c = 0;
	result = 0;
	nb_strt = get_counts(str, &ng_c, &nb_c);
	if (!is_invalid_base(base))
	{
		lbase = 0;
		while (base[lbase])
			lbase++;
		while (nb_c > 0)
		{
			nb_c--;
			result += get_i(str[nb_strt - nb_c], base) * pw(lbase, nb_c);
			//printf("c: %c ", str[nb_strt - nb_c]);
			//printf("r: %i\n", result);
		}
	}
	if (ng_c % 2 != 0)
		result *= -1;
	return (result);
}

int	main( void )
{
	printf("Bin (1011 == 11): %i\n", ft_atoi_base("  --+--1011shjghd0101", "01"));
	printf("Hex (7E == 126): %i\n", ft_atoi_base("  --+--7Eab0101", "0123456789ABCDEF"));
	printf("Oct (124 == 84): %i\n", ft_atoi_base("  --+--124ab0101", "01234567"));
	return (0);
}
