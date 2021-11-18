/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:38:23 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/17 17:10:48 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	count;
	unsigned int	len_dest;

	i = ft_strlen(src);
	x = ft_strlen(dest);
	len_dest = ft_strlen(dest);
	count = 0;
	if (size < 1)
		return (i + size);
	while (src[count] && len_dest < size - 1)
	{
		dest[len_dest] = src[count];
		count++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	if (size < x)
		return (i + size);
	return (i + x);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
