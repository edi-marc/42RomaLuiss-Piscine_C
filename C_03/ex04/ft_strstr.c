/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:33:36 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/11 17:53:28 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		if (str[j] == to_find[i])
		{
			while (str[i + j] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[j]);
		}
		j++;
	}
	return (0);
}
