/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvez- <jgalvez-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:01:28 by jgalvez-          #+#    #+#             */
/*   Updated: 2021/11/17 23:09:21 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_string.h"
#include "ft_stdlib.h"
#include "read.h"

struct s_map_config	read_config(char *str)
{
	struct s_map_config	map_config;
	int					i;

	i = 0;
	map_config.lines = ft_atoi(str);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	map_config.empty = str[i];
	map_config.obstacle = str[i + 1];
	map_config.filled = str[i + 2];
	return (map_config);
}

int	check_mapfile(struct s_map_config mc)
{
	int	i;
	int	j;

	i = -1;
	while (++i < mc.lines)
	{
		if (ft_strlen(mc.contents[i]) != mc.cols)
			return (0);
		j = -1;
		while (++j < mc.cols)
		{
			if (mc.contents[i][j] != mc.empty
				&& mc.contents[i][j] != mc.obstacle)
				return (0);
		}
	}
	if (!mc.empty || !mc.obstacle || !mc.filled
		|| mc.empty == mc.obstacle || mc.empty == mc.filled
		|| mc.obstacle == mc.filled
		|| mc.empty < 32 || mc.empty > 126
		|| mc.filled < 32 || mc.filled > 126
		|| mc.obstacle < 32 || mc.obstacle > 126
		|| mc.lines < 1 || mc.cols < 1)
		return (0);
	return (1);
}

struct s_map_config	read_mapfile(char *filename)
{
	int					fd;
	char				*line;
	int					i;
	struct s_map_config	map_config;

	if (ft_strlen(filename) != 0)
		fd = open(filename, O_RDONLY);
	else
		fd = 0;
	line = read_line(fd);
	map_config = read_config(line);
	free(line);
	i = 0;
	map_config.contents = (char **)malloc(map_config.lines * sizeof(char *));
	while (i < map_config.lines)
	{
		map_config.contents[i] = read_line(fd);
		if (i == 0)
			map_config.cols = ft_strlen(map_config.contents[i]);
		i++;
	}
	if (fd != 0)
		close(fd);
	map_config.valid = check_mapfile(map_config);
	return (map_config);
}

char	*read_line(int fd)
{
	char	c[1];
	char	*line;
	char	*tmp;

	line = (char *)malloc(1);
	if (!line)
		return (NULL);
	line[0] = '\0';
	while (read(fd, c, 1) > 0 && c[0] != '\n')
	{
		tmp = line;
		line = (char *)malloc(1 + ft_strlen(tmp));
		if (!line)
			return (NULL);
		line[0] = '\0';
		ft_strncat(line, tmp, ft_strlen(tmp));
		ft_strncat(line, c, 1);
		if (tmp)
			free(tmp);
		tmp = NULL;
	}
	return (line);
}

int	**map_to_array(struct s_map_config config)
{
	int	**arr;
	int	x;
	int	y;

	arr = (int **)malloc(config.lines * config.cols * sizeof(int *));
	y = 0;
	while (y < config.lines)
	{
		arr[y] = (int *)malloc(config.cols * sizeof(int));
		x = 0;
		while (x < config.cols)
		{
			if (config.contents[y][x] == config.empty)
				arr[y][x] = 1;
			else if (config.contents[y][x] == config.obstacle)
				arr[y][x] = 0;
			x++;
		}
		y++;
	}
	return (arr);
}
