/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:44:44 by edi-marc          #+#    #+#             */
/*   Updated: 2020/11/30 13:59:38 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char z, char y, char x)
{
	char space;
	char comma;
	char maxchar;

	space = 32;
	comma = 44;
	maxchar = 57;
	if (x == maxchar && y == x - 1 && z == y - 1)
	{
		write(1, &z, 1);
		write(1, &y, 1);
		write(1, &x, 1);
	}
	else
	{
		write(1, &z, 1);
		write(1, &y, 1);
		write(1, &x, 1);
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_check_char(char z, char y, char x)
{
	if (x > y && y > z)
		ft_print_char(z, y, x);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;
	int maxchar;

	c = 48;
	d = 48;
	u = 48;
	maxchar = 57;
	while (c <= maxchar)
	{
		while (d <= maxchar)
		{
			while (u <= maxchar)
			{
				ft_check_char(c, d, u);
				u++;
			}
			u = 48;
			d++;
		}
		d = 48;
		c++;
	}
}
