/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:15:11 by edi-marc          #+#    #+#             */
/*   Updated: 2021/01/15 19:13:55 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

void	rebuild(char *str_n, char *str_u, char *str_s, char *str_m, char *str_b, char *str_i)
{
	strcpy(str_n, "");
	strcpy(str_u, "c");
	strcpy(str_s, "ciao");
	strcpy(str_m, "c1ao_a");
	strcpy(str_b, "ciao_a_tutti");
	strcpy(str_i, "Iao");
}

int main(void)
{
	char str_n[]="";
	char str_u[]="c";
	char str_s[]="ciao";
	char str_m[]="c1ao_a";
	char str_b[]="ciao_a_tutti";
	char str_i[]="Iao";
	char *str_a;

	char num_1[]=" 	d";
	char num_2[]=" 	+--+-d";
	char num_3[]=" 	+--+--++ ";
	char num_4[]=" 	+--+--+1f";
	char num_5[]=" 	+--+--+145 ";
	char num_6[]=" 	-42";
	char num_7[]="-214748364942";
	char num_8[]=" 	 -56b";
	
	printf("\n-- TEST strncmp --\n\n");

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
	
	printf("\n-- TEST atoi --\n\n");

	printf("TEST original function\n");
	printf("%d\n",atoi(num_1));
	printf("%d\n",atoi(num_2));
	printf("%d\n",atoi(num_3));
	printf("%d\n",atoi(num_4));
	printf("%d\n",atoi(num_5));
	printf("%d\n",atoi(num_6));
	printf("%d\n",atoi(num_7));
	printf("%d\n",atoi(num_8));
	
	printf("TEST ft function\n");
	printf("%d\n",ft_atoi(num_1));
	printf("%d\n",ft_atoi(num_2));
	printf("%d\n",ft_atoi(num_3));
	printf("%d\n",ft_atoi(num_4));
	printf("%d\n",ft_atoi(num_5));
	printf("%d\n",ft_atoi(num_6));
	printf("%d\n",ft_atoi(num_7));
	printf("%d\n",ft_atoi(num_8));
	
	printf("\n-- TEST strlen --\n\n");

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

	printf("\n-- TEST strrchr --\n\n");

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

	printf("\n-- TEST memset --\n\n");

	printf("TEST original function\n");
	printf("%s\n",memset(str_u, 126, 2));
	// gcc error - overflow
	//printf("%s\n",memset(str_n, 126, 3));
	printf("%s\n",memset(str_s, 42, 1));
	printf("%s\n",memset(str_m, 42, 5));
	printf("%s\n",memset(str_b, 300, 1));
	printf("%s\n",memset(str_i, 300, (0)));

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);
	
	printf("TEST ft function\n");
	printf("%s\n",ft_memset(str_u, 126, 2));
	// no error - copying outside the range of the string | fill the entire string
	// printf("%s\n",ft_memset(str_n, 126, 3));
	printf("%s\n",ft_memset(str_s, 42, 1));
	printf("%s\n",ft_memset(str_m, 42, 5));
	printf("%s\n",ft_memset(str_b, 300, 1));
	printf("%s\n",ft_memset(str_i, 300, 0));

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("\n-- TEST bzero --\n\n");
	
	printf("TEST original function\n");
	// gcc error - overflow (bzero use memsert)
	//printf("%s\n",bzero(str_n, 2));
	bzero(str_s, 3);
	write(1,&str_s, 4);
	write(1,"\n", 1);

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("TEST ft function\n");
	// no error - (ft_bzero use ft_memsert)
	//printf("%s\n",ft_bzero(str_n, 2));
	ft_bzero(str_s, 3);
	write(1,&str_s, 4);
	write(1,"\n", 1);

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("\n-- TEST memcpy --\n\n");
	
	printf("TEST original function\n");
	str_a = str_b + 5;
	printf("%s\n", memcpy(str_a, str_b, 6));
	printf("%s\n", memcpy(str_s, str_i, 2));
	memcpy(str_m, str_n, 5);
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// gcc error - overflow
	//printf("%s\n", memcpy(str_n, str_u, 3));
	printf("%s\n", memcpy(str_u, str_b, 0));
	
	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("TEST ft function\n");
	str_a = str_b + 5;
	printf("%s\n", ft_memcpy(str_a, str_b, 6));
	printf("%s\n", ft_memcpy(str_s, str_i, 2));
	ft_memcpy(str_m, str_n, 5);
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// no error - overflow
	//printf("%s\n", ft_memcpy(str_n, str_u, 3));
	printf("%s\n", ft_memcpy(str_u, str_b, 0));

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("\n-- TEST memccpy --\n\n");
	
	printf("TEST original function\n");
	// error - abort
	//str_a = str_b + 5;
	//printf("%s\n", memccpy(str_a, str_b, 42, 6));
	//printf("%s\n", str_b);
	printf("%s\n", memccpy(str_s, str_i, 97, 3));
	printf("%s\n", str_s);
	printf("%s\n", memccpy(str_m, str_u, 42, 5));
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// gcc error - overflow
	//printf("%s\n", memccpy(str_n, str_u, 42, 3));
	printf("%s\n", memccpy(str_u, str_b, 42, 0));
	printf("%s\n", str_u);
	printf("%s\n", memccpy(str_u, str_b, 97, 0));
	printf("%s\n", str_u);

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("TEST ft function\n");
	// no error
	//str_a = str_b + 5;
	//printf("%s\n", ft_memccpy(str_a, str_b, 42, 6));
	//printf("%s\n", str_b);
	printf("%s\n", ft_memccpy(str_s, str_i, 97, 3));
	printf("%s\n", str_s);
	printf("%s\n", ft_memccpy(str_m, str_u, 42, 5));
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// no error - overflow
	//printf("%s\n", ft_memccpy(str_n, str_u, 42, 3));
	printf("%s\n", ft_memccpy(str_u, str_b, 42, 0));
	printf("%s\n", str_u);
	printf("%s\n", ft_memccpy(str_u, str_b, 97, 0));
	printf("%s\n", str_u);

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);

	printf("\n-- TEST memmove --\n\n");
	
	printf("TEST original function\n");
	str_a = str_b + 5;
	printf("%s\n", memmove(str_a, str_b, 6));
	printf("%s\n", memmove(str_s, str_i, 3));
	printf("%s\n", memmove(str_m, str_u, 5));
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// gcc error - overflow
	//printf("%s\n", memmove(str_n, str_u, 3));
	printf("%s\n", memmove(str_u, str_b, 0));
	printf("%s\n", memmove(str_u, str_b, 0));
	printf("%s\n", memmove(str_n, str_u, 1));

	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);
	
	printf("TEST ft function\n");
	str_a = str_b + 5;
	printf("%s\n", ft_memmove(str_a, str_b, 6));
	printf("%s\n", ft_memmove(str_s, str_i, 3));
	printf("%s\n", ft_memmove(str_m, str_u, 5));
	write(1, &str_m, 6);
	write(1, "\n", 1);
	// no error - overflow
	//printf("%s\n", ft_memmove(str_n, str_u, 3));
	printf("%s\n", ft_memmove(str_u, str_b, 0));
	printf("%s\n", ft_memmove(str_u, str_b, 0));
	printf("%s\n", ft_memmove(str_n, str_u, 1));
	
	rebuild(str_n, str_u, str_s, str_m, str_b, str_i);
	
	printf("\n-- TEST memchr --\n\n");
	
	printf("TEST original function\n");
	printf("%s\n", memchr(str_n, 116, 7));
	printf("%s\n", memchr(str_n, 0, 1));
	printf("%s\n", memchr(str_b, 0, 28));
	printf("%s\n", memchr(str_b, 116, 7));
	printf("%s\n", memchr(str_b, 116, 20));
	
	printf("TEST ft function\n");
	printf("%s\n", ft_memchr(str_n, 116, 7));
	printf("%s\n", ft_memchr(str_n, 0, 1));
	printf("%s\n", ft_memchr(str_n, 0, 28));
	printf("%s\n", ft_memchr(str_b, 116, 7));
	printf("%s\n", ft_memchr(str_b, 116, 20));

	return (0);
}
