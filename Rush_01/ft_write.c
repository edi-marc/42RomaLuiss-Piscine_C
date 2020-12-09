/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstile <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 19:27:55 by vstile            #+#    #+#             */
/*   Updated: 2020/12/06 20:30:29 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_up(int i, char (*matrix)[4], char *values)
{
	matrix[0][i] = values[0];
	matrix[1][i] = values[1];
	matrix[2][i] = values[2];
	matrix[3][i] = values[3];
}

void	write_down(int i, char (*matrix)[4], char *values)
{
	matrix[3][i - 4] = values[0];
	matrix[2][i - 4] = values[1];
	matrix[1][i - 4] = values[2];
	matrix[0][i - 4] = values[3];
}

void	write_left(int i, char (*matrix)[4], char *values)
{
	matrix[i - 8][0] = values[0];
	matrix[i - 8][1] = values[1];
	matrix[i - 8][2] = values[2];
	matrix[i - 8][3] = values[3];
}

void	write_right(int i, char (*matrix)[4], char *values)
{
	matrix[3][i - 12] = values[0];
	matrix[2][i - 12] = values[1];
	matrix[1][i - 12] = values[2];
	matrix[0][i - 12] = values[3];
}
