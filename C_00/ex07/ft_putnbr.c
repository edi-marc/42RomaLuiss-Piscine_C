/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:16:21 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/01 18:10:25 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c)
{
	char r;

	r = c + 48;
	write(1, &r, 1);
}

void	divide(int numbr)
{
	int num;

	num = numbr;
	if (numbr / 10 != 0)
	{
		num = numbr % 10;
		numbr = numbr / 10;
		divide(numbr);
		print(num);
	}
	else
		print(num);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		divide(nb);
	}
	else
		divide(nb);
}
