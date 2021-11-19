/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvez- <jgalvez-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:44:06 by jgalvez-          #+#    #+#             */
/*   Updated: 2021/11/17 23:10:22 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "read.h"
#include <stdlib.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	in_result_square(int y, int x, struct s_result result)
{
	return (y >= result.y && y < result.y + result.count
		&& x >= result.x && x < result.x + result.count);
}

void	print_result(struct s_map_config config,
					struct s_result result, int **arr)
{
	int	x;
	int	y;

	y = 0;
	while (y < config.lines)
	{
		x = 0;
		while (x < config.cols)
		{
			if (arr[y][x] == 0)
				ft_put_char(config.obstacle);
			else if (in_result_square(y, x, result))
				ft_put_char(config.filled);
			else
				ft_put_char(config.empty);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	resolve_file(char *filename)
{
	struct s_map_config	map_config;
	struct s_result		result;
	int					**arr;
	int					i;

	map_config = read_mapfile(filename);
	if (map_config.valid)
	{
		arr = map_to_array(map_config);
		result = ft_find_square(map_config, arr);
		print_result(map_config, result, arr);
		i = 0;
		while (i < map_config.lines)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	else
		write(1, "map error\n", 10);
	i = -1;
	while (++i < map_config.lines)
		free(map_config.contents[i]);
	free(map_config.contents);
}

int	main(int argc, char *argv[])
{
	int					map;

	if (argc > 1)
	{
		map = 1;
		while (map < argc)
		{
			resolve_file(argv[map]);
			if (map < argc - 1)
				ft_put_char('\n');
			map++;
		}
	}
	else
		resolve_file("");
}
