/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:33:47 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/06 20:36:06 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_up(int i, char (*matrix)[4], char *values);
void	write_down(int i, char (*matrix)[4], char *values);
void	write_left(int i, char (*matrix)[4], char *values);
void	write_right(int i, char (*matrix)[4], char *values);

void	ft_find_solution(char (*matrix)[4], char *clues)
{
	int		i;
	char	*values;

	i = 0;
	while (*clues)
	{
		if (*clues == '4')
		{
			values = "1234";
			if (i >= 0 && i <= 3)
				write_up(i, matrix, values);
			if (i >= 4 && i <= 7)
				write_down(i, matrix, values);
			if (i >= 8 && i <= 11)
				write_left(i, matrix, values);
			if (i >= 12 && i <= 15)
				write_right(i, matrix, values);
		}
		clues++;
		i++;
	}
}
