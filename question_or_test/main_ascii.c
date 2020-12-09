/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:31:56 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/09 08:54:41 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**	stampo il valore ascii del primo carattere passato
**	(see "man ascii" "man 3 isspace")
*/

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("valore ascii = %d\n", argv[1][0]);
	}
}
