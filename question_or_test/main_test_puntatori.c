/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_puntatori.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:49:07 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/09 19:42:01 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	move_pointer(char *ptr)
{
	ptr++;
	ptr++;
	write(1, "nella funzione = ", 17);
	write(1, ptr, 1);
	write(1, "\n", 1);
}

char	*move_pointer_2(char *ptr)
{
	ptr++;
	ptr++;
	write(1, "nella funzione = ", 17);
	write(1, ptr, 1);
	write(1, "\n", 1);
	return(ptr);
}

int		main()
{

	char *string="abcd";

	write(1, "prima = ", 8);
	write(1, string, 1);
	write(1, "\n", 1);

	move_pointer(string);

	write(1, "dopo = ", 7);
	write(1, string, 1);
	write(1, "\n", 1);

	string = move_pointer_2(string);

	write(1, "dopo 2 = ", 9);
	write(1, string, 1);
	write(1, "\n", 1);

	return (0);
}
