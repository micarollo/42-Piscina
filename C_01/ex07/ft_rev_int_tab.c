/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:12:09 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/09 16:58:19 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	start;
	int	finish;

	start = 0;
	finish = size - 1;
	while (start < size / 2)
	{
		aux = tab[start];
		tab[start] = tab[finish];
		tab[finish] = aux;
		start++;
		finish--;
	}
}
