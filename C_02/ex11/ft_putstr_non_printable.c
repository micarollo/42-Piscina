/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:22:04 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/10 17:27:19 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	dec_to_hex(int n, int err);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			j = str[i];
			dec_to_hex(j, 0);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	dec_to_hex(int n, int err)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n <= 0 && err == 0)
	{
		n += 256;
	}
	if (n >= 16)
	{
		dec_to_hex(n / 16, 1);
		dec_to_hex(n % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(hex[n]);
	}
}
