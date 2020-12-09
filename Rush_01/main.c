/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:28:49 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/06 20:34:01 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** find solution
*/

void	ft_find_solution(char (*matrix)[4], char *clues);

/*
**	Input validation for argv
*/

int		ft_check_input(char **argv);

/*
** Initialize my array of clues
*/

void	grep_clues(char **argv, char *clues)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			*clues = argv[1][i];
			clues++;
		}
		i++;
	}
	*clues = '\0';
}

/*
** Print the matrix
*/

void	print_matrix(char (*matrix)[4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			write(1, &matrix[j][i], 1);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

/*
** !Attenzione! il parametro e' unico
*/

int		main(int argc, char **argv)
{
	int		check;
	char	clues_array[18];
	char	matrix_array[4][4];
	char	(*matrix)[4];
	char	*clues;

	clues = &clues_array[0];
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		matrix = matrix_array;
		check = ft_check_input(argv);
		if (check == 1)
		{
			grep_clues(argv, clues);
			ft_find_solution(matrix, clues);
			print_matrix(matrix);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
