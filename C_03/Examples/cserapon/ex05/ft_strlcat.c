/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserapon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:33:32 by cserapon          #+#    #+#             */
/*   Updated: 2020/12/03 16:57:08 by cserapon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	dest_size;

	dest_size = ft_strlen(dest);
	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
		count++;
	while (size - dest_size > 1)
	{
		if (count2 + dest_size + 1 == size || src[count2] == '\0')
			break ;
		dest[count + count2] = src[count2];
		count2++;
	}
	if (size > 0)
		dest[count + count2] = '\0';
	return (dest_size + ft_strlen(src));
}
