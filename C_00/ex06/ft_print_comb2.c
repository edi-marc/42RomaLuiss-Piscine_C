/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:06:01 by edi-marc          #+#    #+#             */
/*   Updated: 2020/11/30 19:38:56 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char w, char z, char y, char x)
{
	x = x + 48;
	y = y + 48;
	z = z + 48;
	w = w + 48;
	if (x == 57 && y == 57 && z == 56 && w == 57)
	{
		write(1, &w, 1);
		write(1, &z, 1);
		write(1, " ", 1);
		write(1, &y, 1);
		write(1, &x, 1);
	}
	else
	{
		write(1, &w, 1);
		write(1, &z, 1);
		write(1, " ", 1);
		write(1, &y, 1);
		write(1, &x, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_check_char(int w, int z, int y, int x)
{
	y = y * 10;
	w = w * 10;
	if ((w + z) < (x + y))
	{
		if (y == 0)
			y = 0;
		else
			y = y / 10;
		if (w == 0)
			w = 0;
		else
			w = w / 10;
		ft_print_char(w, z, y, x);
	}
}

void	ft_print_comb2(void)
{
	int m;
	int c;
	int d;
	int u;

	m = -1;
	c = -1;
	d = -1;
	u = -1;
	while (m++ <= 8)
	{
		while (c++ <= 8)
		{
			while (d++ <= 8)
			{
				while (u++ <= 8)
				{
					ft_check_char(m, c, d, u);
				}
				u = -1;
			}
			d = -1;
		}
		c = -1;
	}
}
