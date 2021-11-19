/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvez- <jgalvez-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:46:11 by jgalvez-          #+#    #+#             */
/*   Updated: 2021/11/16 13:25:33 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_string.h"

int	ft_atoi(char *str)
{
	int	positive_negative;
	int	nbr;

	positive_negative = 1;
	nbr = 0;
	while (*str && ft_isspace(*str))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			positive_negative *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	nbr *= positive_negative;
	return (nbr);
}
