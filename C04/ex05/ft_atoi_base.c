/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner < dmoliner@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:45:50 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/20 02:14:55 by dmoliner         ###   ########.fr       */
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
	if (p == 0)
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

int	get_counts(char *str, int *ngtv_count, int *nmbr_count, char *base)
{
	int	i;
	int	nmbr_i;
	int	j;

	i = 0;
	nmbr_i = -1;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == '-' && *nmbr_count == 0)
			(*ngtv_count)++;
		while (base[j] != '\0')
		{
			if (base[j++] == str[i])
			{
				(*nmbr_count)++;
				nmbr_i = i;
			}
		}
		if (*nmbr_count > 0 && nmbr_i != i)
			return (nmbr_i);
		i++;
	}
	return (nmbr_i);
}

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
	nb_strt = get_counts(str, &ng_c, &nb_c, base);
	if (!is_invalid_base(base))
	{
		lbase = 0;
		while (base[lbase])
			lbase++;
		while (nb_c-- > 0)
			result += get_i(str[nb_strt - nb_c], base) * pw(lbase, nb_c);
	}
	if (ng_c % 2 != 0)
		result *= -1;
	return (result);
}

/*#include <stdio.h>
int	main( void )
{
	printf("Test	|	  00   		|:	 %i\n",
	ft_atoi_base("  --34252shjghd0101", "1"));
	printf("-------------------------------------------\n");
	printf("Test2	|	  00   		|:	 %i\n",
	ft_atoi_base("  -+-+-10101ab", "01001"));
	printf("-------------------------------------------\n");
	printf("Bin	|    1011 == 11		|: 	 %i\n",
	ft_atoi_base("  --1011-shjghd0101", "01"));
	printf("-------------------------------------------\n");
	printf("Hex	|    -55D == -1373	|:	%i\n",
	ft_atoi_base("  -+-+-55Dab", "0123456789ABCDEF"));
	printf("-------------------------------------------\n");
	printf("Oct	|    -124 == -84	|:	%i\n",
	ft_atoi_base("  	--+-124ab0101", "01234567"));
	printf("-------------------------------------------\n");
	printf("Oct	|   00103 == 67		|:	 %i\n",
	ft_atoi_base("  --+--00103ab0101", "01234567"));
	printf("-------------------------------------------\n");
	printf("Hex	|7FFFFFFF == 2147483647	|:	 %i\n",
	ft_atoi_base("  --+--7FFFFFFFabs", "0123456789ABCDEF"));
	printf("-------------------------------------------\n");
	printf("42Mad	|     2aM == 42		|:	 %i\n",
	ft_atoi_base("  --+--2aMtabs", "42Mad"));
	return (0);
}*/
