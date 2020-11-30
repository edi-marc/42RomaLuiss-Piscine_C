/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:13:20 by edi-marc          #+#    #+#             */
/*   Updated: 2020/11/29 19:29:41 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cr);

/*
** check-print 1_pos sp_vertex top_bottom-left_right border - inside
*/

void	check_pos(int posx, int posy, int xmax, int ymax)
{
	char vert_1;
	char vert_2;
	char tb_b;
	char lr_b;
	char inside;

	vert_1 = '/';
	vert_2 = 92;
	tb_b = '*';
	lr_b = '*';
	inside = 32;
	if (posx == 1 && posy == 1)
		ft_putchar(vert_1);
	else if ((posx == xmax && posy == ymax) && (xmax != 1 && ymax != 1))
		ft_putchar(vert_1);
	else if ((posx == 1 && posy == ymax) || (posx == xmax && posy == 1))
		ft_putchar(vert_2);
	else if (posy == 1 || posy == ymax)
		ft_putchar(tb_b);
	else if (posx == 1 || posx == xmax)
		ft_putchar(lr_b);
	else
		ft_putchar(inside);
}

/*
** only work with positive integer
*/

void	rush(int x, int y)
{
	int pos_elem;
	int num_righe;

	pos_elem = 1;
	num_righe = 1;
	if (x > 0 && y > 0)
	{
		while (num_righe <= y)
		{
			while (pos_elem <= x)
			{
				check_pos(pos_elem, num_righe, x, y);
				pos_elem++;
			}
			pos_elem = 1;
			write(1, "\n", 1);
			num_righe++;
		}
	}
}
