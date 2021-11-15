/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:28:38 by mrollo            #+#    #+#             */
/*   Updated: 2021/10/31 16:13:45 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
char	choose_char(int row, int column, int x, int y);

void	rush(int y, int x)
{
	int	row;
	int	column;

	row = 0;
	while (row < x)
	{
		column = 0;
		while (column < y)
		{
			ft_putchar(choose_char(row, column, x, y));
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}

char	choose_char(int row, int column, int x, int y)
{
	if ((row == 0 && column == 0) || (row == (x - 1) && column == 0))
		return ('A');
	else if ((column == (y - 1)) && ((row == 0) || (row == (x - 1))))
		return ('C');
	else if ((row == 0 || column == 0 ) && (row < x || column < y))
		return ('B');
	else if (column == (y - 1) || (row == (x - 1)))
		return ('B');
	else
		return (' ');
}
