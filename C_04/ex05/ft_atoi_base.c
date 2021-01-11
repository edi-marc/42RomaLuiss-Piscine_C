/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:33:01 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/10 17:04:52 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*jump_to_n(char *str, int *sign)
{
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			*sign = *sign * -1;
		str++;
	}
	return (str);
}

int		check_base(char *base, int len)
{
	int check;
	int i;
	int j;

	check = 1;
	i = 0;
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

int		is_in_base(char *base, char c)
{
	int check;
	int i;

	check = 0;
	i = 0;
	while (base[i] != '\0' && !check)
	{
		if (base[i] == c)
			check = 1;
		i++;
	}
	return (check);
}

int		calculate(char *str, char *base, int len)
{
	int nbr;
	int k;
	int i;
	int pos;

	nbr = 0;
	k = 0;
	i = 0;
	pos = 1;
	while (is_in_base(base, *str))
	{
		nbr = nbr * len;
		while (base[i] != '\0')
		{
			if (base[i] == *str)
				pos = i;
			i++;
		}
		nbr = nbr + pos;
		str++;
	}
	return (nbr);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int nbr;
	int *s;
	int len;
	int i;

	sign = 1;
	s = &sign;
	nbr = 0;
	len = 0;
	i = 0;
	while (base[i] != '\0')
	{
		len++;
		i++;
	}
	if (check_base(base, len))
	{
		str = jump_to_n(str, s);
		nbr = calculate(str, base, len);
		nbr = nbr * sign;
	}
	return (nbr);
}
