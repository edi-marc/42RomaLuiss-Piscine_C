/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:01:27 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/10 08:18:53 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*jump_space(char *str)
{
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	return (str);
}

char	*jump_sign(char *str, int *sign)
{
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			*sign = *sign * -1;
		str++;
	}
	return (str);
}

int		calculate(char *str)
{
	int nbr;
	int k;

	nbr = 0;
	k = 0;
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10;
		k = *str;
		nbr = nbr + (k - 48);
		str++;
	}
	return (nbr);
}

int		ft_atoi(char *str)
{
	int sign;
	int nbr;
	int *s;

	sign = 1;
	s = &sign;
	str = jump_space(str);
	str = jump_sign(str, s);
	nbr = calculate(str);
	nbr = nbr * sign;
	return (nbr);
}
