/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:04:14 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/18 18:40:29 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_check_base(char *base);
int	ft_strlen(char *base);
int	ft_check_n(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	lengbase;

	lengbase = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	if (!ft_check_n(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= lengbase)
	{
		ft_putnbr_base(nbr / lengbase, base);
		nbr = nbr % lengbase;
	}
	if (nbr <= lengbase)
	{
		write(1, &base[nbr], 1);
	}
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	len = ft_strlen(base);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_n(char *base)
{
	int	len;

	len = ft_strlen(base);
	if (!base || len == 1)
		return (0);
	return (1);
}
