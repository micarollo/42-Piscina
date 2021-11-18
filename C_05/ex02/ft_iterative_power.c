/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 02:42:51 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/18 21:24:29 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	p = 1;
	i = 1;
	while (i <= power)
	{
		p *= nb;
		i++;
	}
	return (p);
}
