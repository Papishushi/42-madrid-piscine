/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoliner <dmoliner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:15:24 by dmoliner          #+#    #+#             */
/*   Updated: 2022/07/13 00:53:48 by dmoliner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char c );

static	void	put_line( int size, char left, char mid, char right)
{
	int	i;

	if (size > 0)
	{
		ft_putchar(left);
		if (size > 1)
		{
			i = 0;
			while (i < (size + -2))
			{
				ft_putchar(mid);
				i++;
			}
			ft_putchar(right);
		}
		ft_putchar('\n');
	}
}

void	rush( int x, int y )
{
	int	i;

	put_line(x, 'A', 'B', 'C');
	i = 2;
	if (y > 1)
	{
		while (i < y)
		{
			put_line(x, 'B', ' ', 'B');
			i++;
		}
		put_line(x, 'C', 'B', 'A');
	}
}
