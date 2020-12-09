/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:44:17 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/06 20:35:19 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	return the lenght of the string
*/

int		ft_str_len(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
**	check even position for [1-4] and in odd position for "space"
*/

int		ft_check_position(char **argv)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (argv[1][i] != '\0' && check == 1)
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < 49 || argv[1][i] > 52)
				check = 0;
		}
		else if (argv[1][i] != 32)
			check = 0;
		i++;
	}
	return (check);
}

/*
** check sum condition for clues - offset for char
*/

int		ft_check_condition(char **argv)
{
	int		i;
	char	sum;
	int		check;

	check = 1;
	i = 0;
	while (i < 23 && check == 1)
	{
		if (i % 2 == 0 && i < 7)
		{
			sum = (argv[1][i] + argv[1][i + 8]) - 48;
			if (!(sum > 50 && sum < 54))
				check = 0;
		}
		if (i % 2 == 0 && i > 15)
		{
			sum = (argv[1][i] + argv[1][i + 8]) - 48;
			if (!(sum > 50 && sum < 54))
				check = 0;
		}
		i++;
	}
	return (check);
}

/*
** check corner clues
*/

int		ft_check_corner(char **argv)
{
	int check;

	check = 1;
	if (argv[1][0] == '1')
	{
		if (argv[1][16] != '1')
			check = 0;
	}
	if (argv[1][6] == '1')
	{
		if (argv[1][24] != '1')
			check = 0;
	}
	if (argv[1][8] == '1')
	{
		if (argv[1][22] != '1')
			check = 0;
	}
	if (argv[1][14] == '1')
	{
		if (argv[1][30] != '1')
			check = 0;
	}
	return (check);
}

/*
** check the input for valid puzzle
*/

int		ft_check_input(char **argv)
{
	int len;
	int check;

	check = 1;
	len = ft_str_len(argv[1]);
	if (len == 31)
	{
		check = ft_check_position(argv);
		if (check == 1)
		{
			check = ft_check_condition(argv);
			if (check == 1)
				check = ft_check_corner(argv);
		}
	}
	else
		check = 0;
	return (check);
}
