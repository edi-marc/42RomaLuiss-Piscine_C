/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argc_argv.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 08:10:52 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/05 17:01:59 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**	argc, numero delle variabili passati al programma, [1,--,n];
**	argv, array di puntatori a stringhe, dove le stringhe sono i valori delle variabili passate;
*/
int		main(int argc, char **argv)
{
	/*
	**	argc e' sempre >=1 poiche' viene contato anche il nome del programma come variabile; 
	*/

	/*
	**	dato che con il mio counter considero anche il nome del programma, argc == 1
	**	significa che non ci sono parametri passati al programma
	*/
	if(argc == 1)
	{
		printf("nessun valore passato\n");
	}

	/*
	**	eseguito <=> il numero delle variabili passate e' 1
	*/
	else if (argc == 2)
		{	
			/*
			**	*argv[0] Nella prima posizione e' presente sempre il nome del programma;
			*/
			printf("nome del programma, *argv[0]= %s\n", argv[0]);

			/*
			** *argv[1] Nella seconda posizione e' presente il valore della prima variabile;
			*/
			printf("valore della variabile passata, *argv[1]= %s\n", argv[1]);

			/*
			** *argv[argc] in questo caso *argv[2] e' sempre NULL;	
			*/
			printf("valore in *argv[argc], sempre NULL, *argv[2]= %s\n", argv[2]);
		}
	
		/*
		** eseguito con variiabili > 2	
		*/	
		else
			{
				int i;

				i = 1;
				while(i < argc)
				{
					printf("valore variabile %d = %s\n", i, argv[i]);
					i++;
				}	
			}

	return(0);
}
