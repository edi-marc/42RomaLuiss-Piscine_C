/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:57:44 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/07 20:32:58 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int check;

	check = 1;
	if (!(*str > 47 && *str < 58))
		check = 0;
	return (check);
}

int		ft_str_is_alpha(char *str)
{
	int check;

	check = 1;
	if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		check = 0;
	return (check);
}

void	ft_strupcase(char *str)
{
	if (*str > 96 && *str < 123)
		*str = *str - 32;
}

int		ft_str_is_uppercase(char *str)
{
	int check;

	check = 1;
	if (!(*str > 64 && *str < 91))
		check = 0;
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_str_is_alpha(&str[i]) || ft_str_is_numeric(&str[i]))
	{
		ft_strupcase(str);
	}
	i++;
	while (str[i] != '\0')
	{
		if (!(ft_str_is_alpha(&str[i - 1]) || ft_str_is_numeric(&str[i - 1])))
		{
			if (ft_str_is_alpha(&str[i]) || ft_str_is_numeric(&str[i]))
				ft_strupcase(&str[i]);
		}
		else
		{
			if (ft_str_is_uppercase(&str[i]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
