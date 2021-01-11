/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:15:45 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/09 15:19:41 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c)
{
	char r;

	r = c + 48;
	write(1, &r, 1);
}

void	divide(long int numbr)
{
	long int num;

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
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb = lnb * -1;
		write(1, "-", 1);
		divide(lnb);
	}
	else
		divide(lnb);
}
