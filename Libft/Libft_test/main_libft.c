/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:15:11 by edi-marc          #+#    #+#             */
/*   Updated: 2021/01/11 19:49:24 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ft_strncmp.c"
#include "ft_atoi.c"
#include "ft_strlen.c"
#include "ft_strrchr.c"

int main(void)
{
	char str_n[]="";
	char str_s[]="ciao";
	char str_m[]="c1ao_a";
	char str_b[]="ciao_a_tutti";
	char str_i[]="Iao";

	char num_1[]=" 	d";
	char num_2[]=" 	+--+-d";
	char num_3[]=" 	+--+--++ ";
	char num_4[]=" 	+--+--+1f";
	char num_5[]=" 	+--+--+145 ";
	char num_6[]="-42";
	char num_7[]="-214748364942";
	
	printf("-- TEST strncmp --\n");

	printf("TEST original function\n");
	printf("%d\n",strncmp(str_n, str_n, 42));
	printf("%d\n",strncmp(str_s, str_n, 5));
	printf("%d\n",strncmp(str_s, str_i, 2));
	printf("%d\n",strncmp(str_m, str_b, 4));
	printf("%d\n",strncmp(str_s, str_b, 4));
	
	printf("TEST ft function\n");
	printf("%d\n",ft_strncmp(str_n, str_n, 42));
	printf("%d\n",ft_strncmp(str_s, str_n, 5));
	printf("%d\n",ft_strncmp(str_s, str_i, 2));
	printf("%d\n",ft_strncmp(str_m, str_b, 4));
	printf("%d\n",ft_strncmp(str_s, str_b, 4));
	
	printf("-- TEST atoi --\n");

	printf("TEST original function\n");
	printf("%d\n",atoi(num_1));
	printf("%d\n",atoi(num_2));
	printf("%d\n",atoi(num_3));
	printf("%d\n",atoi(num_4));
	printf("%d\n",atoi(num_5));
	printf("%d\n",atoi(num_6));
	printf("%d\n",atoi(num_7));
	
	printf("TEST ft function\n");
	printf("%d\n",ft_atoi(num_1));
	printf("%d\n",ft_atoi(num_2));
	printf("%d\n",ft_atoi(num_3));
	printf("%d\n",ft_atoi(num_4));
	printf("%d\n",ft_atoi(num_5));
	printf("%d\n",ft_atoi(num_6));
	printf("%d\n",ft_atoi(num_7));
	
	printf("-- TEST strlen --\n");

	printf("TEST original function\n");
	printf("%lu\n",strlen(str_n));
	printf("%lu\n",strlen(str_m));
	printf("%lu\n",strlen(str_s));
	printf("%lu\n",strlen(str_b));
	printf("%lu\n",strlen(str_i));

	printf("TEST ft function\n");
	printf("%lu\n",ft_strlen(str_n));
	printf("%lu\n",ft_strlen(str_m));
	printf("%lu\n",ft_strlen(str_s));
	printf("%lu\n",ft_strlen(str_b));
	printf("%lu\n",ft_strlen(str_i));

	printf("-- TEST strrchr --\n");

	printf("TEST original function\n");
	/* Not found  - B */
	printf("%p\n",strrchr(str_n, 66));
	printf("%s\n",strrchr(str_n, 66));
	/* null character  */
	printf("%p\n",strrchr(str_s, 0));
	printf("%s\n",strrchr(str_s, 0));
	/* last character - o  */
	printf("%p\n",strrchr(str_s, 111));
	printf("%s\n",strrchr(str_s, 111));
	/* first character - c */
	printf("%p\n",strrchr(str_m, 99));
	printf("%s\n",strrchr(str_m, 99));
	/* third character - a  */
	printf("%p\n",strrchr(str_s, 97));
	printf("%s\n",strrchr(str_s, 97));
	/* penultimate character - t */
	printf("%p\n",strrchr(str_b, 116));
	printf("%s\n",strrchr(str_b, 116));
	/* int not in ascii - loop */
	//printf("%p\n",ft_strrchr(str_b, 242));
	//printf("%s\n",ft_strrchr(str_b, 242));
	
	printf("TEST ft function\n");
	/* Not found  - B */
	printf("%p\n",ft_strrchr(str_n, 66));
	printf("%s\n",ft_strrchr(str_n, 66));
	/* null character  */
	printf("%p\n",ft_strrchr(str_s, 0));
	printf("%s\n",ft_strrchr(str_s, 0));
	/* last character - o  */
	printf("%p\n",ft_strrchr(str_s, 111));
	printf("%s\n",ft_strrchr(str_s, 111));
	/* first character - c */
	printf("%p\n",ft_strrchr(str_m, 99));
	printf("%s\n",ft_strrchr(str_m, 99));
	/* third character - a  */
	printf("%p\n",ft_strrchr(str_s, 97));
	printf("%s\n",ft_strrchr(str_s, 97));
	/* penultimate character - t */
	printf("%p\n",ft_strrchr(str_b, 116));
	printf("%s\n",ft_strrchr(str_b, 116));
	/* int not in ascii - null */
	//printf("%p\n",ft_strrchr(str_b, 242));
	//printf("%s\n",ft_strrchr(str_b, 242));

	return (0);
}
