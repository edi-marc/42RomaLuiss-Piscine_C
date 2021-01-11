/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 08:43:42 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/10 13:57:05 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_lenght(char *base)
{
	int len;

	len = 0;
	while (*base != '\0')
	{
		len++;
		base++;
	}
	return (len);
}

int		check_base(char *base)
{
	int check;
	int len;
	int i;
	int j;

	check = 1;
	i = 0;
	len = base_lenght(base);
	if (len == 0 || len == 1)
		check = 0;
	while (i < len && check == 1)
	{
		if (base[i] == 43 || base[i] == 45 || !(base[i] > 31 && base[i] < 127))
			check = 0;
		j = i + 1;
		while (j < len && check == 1)
		{
			if (base[i] == base[j])
				check = 0;
			j++;
		}
		i++;
	}
	return (check);
}

void	print(int c, char *base)
{
	write(1, &base[c], 1);
}

void	divide_nbr(long int numbr, char *base)
{
	long int	num;
	int			len;

	num = numbr;
	len = base_lenght(base);
	if (numbr / len != 0)
	{
		num = numbr % len;
		numbr = numbr / len;
		divide_nbr(numbr, base);
		print(num, base);
	}
	else
		print(num, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int lnb;

	lnb = nbr;
	if (check_base(base))
	{
		if (lnb < 0)
		{
			lnb = lnb * -1;
			write(1, "-", 1);
			divide_nbr(lnb, base);
		}
		else
			divide_nbr(lnb, base);
	}
}
