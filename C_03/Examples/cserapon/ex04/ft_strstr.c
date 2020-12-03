/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserapon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:27:36 by cserapon          #+#    #+#             */
/*   Updated: 2020/12/03 17:00:17 by cserapon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	count;
	unsigned int	count2;
	char			*ptr;

	count = 0;
	count2 = 0;
	while (str[count] != '\0')
	{
		if (to_find[count2] == '\0')
			return (ptr);
		if (str[count] == to_find[count2])
		{
			if (count2 == 0)
				ptr = &str[count];
			count2++;
		}
		else
		{
			count -= count2 + 1;
			count2 = 0;
		}
		count++;
	}
	return (0);
}
