/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:58 by mrollo            #+#    #+#             */
/*   Updated: 2021/11/17 23:11:05 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "read.h"

int	ft_min_num(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

struct s_result	ft_find_square(struct s_map_config config, int **map)
{
	struct s_result	result;
	int				x;
	int				y;
	int				count;

	count = 0;
	y = 0;
	while (y < config.lines)
	{
		x = 0;
		while (x < config.cols)
		{
			if (map[y][x] != 0 && x != 0 && y != 0)
				map[y][x] = ft_min_num(map[y - 1][x],
						map[y][x - 1], map[y - 1][x - 1]) + 1;
			if (map[y][x] > count)
			{
				count = map[y][x];
				result = ft_update_result(count, x, y);
			}
			x++;
		}
		y++;
	}
	return (result);
}

struct s_result	ft_update_result(int count, int x, int y)
{
	struct s_result	result;

	result.x = x - (count - 1);
	result.y = y - (count - 1);
	result.count = count;
	return (result);
}
