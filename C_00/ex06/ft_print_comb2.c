/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:11:15 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/03 16:27:59 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_int_a_char(int num);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 00;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_int_a_char(num1);
			write(1, " ", 1);
			ft_int_a_char(num2);
			if (num1 != 98 || num2 != 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

void	ft_int_a_char(int num)
{
	char	a;
	char	b;

	a = 48 + num / 10;
	write(1, &a, 1);
	b = 48 + num % 10;
	write(1, &b, 1);
}
