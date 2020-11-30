/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:30:36 by edi-marc          #+#    #+#             */
/*   Updated: 2020/11/29 13:06:03 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cr);

/*
** check backslash_slash-vertex top_bottom-left_right border - inside
*/

void	check_pos(int posx, int posy, int xmax, int ymax)
{
	char vert_1;
	char vert_2;
	char tb_b;
	char lr_b;
	char inside;

	vert_1 = 'o';
	vert_2 = 'o';
	tb_b = '-';
	lr_b = '|';
	inside = 32;
	if ((posx == 1 && posy == 1) || (posx == xmax && posy == ymax))
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
