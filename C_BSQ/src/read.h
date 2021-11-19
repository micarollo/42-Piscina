/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvez- <jgalvez-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:50:42 by jgalvez-          #+#    #+#             */
/*   Updated: 2021/11/17 22:38:10 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef READ_H
# define READ_H

struct s_map_config {
	int		lines;
	int		cols;
	char	empty;
	char	obstacle;
	char	filled;
	char	**contents;
	int		valid;
	int		file_error;
};

struct s_result {
	int	x;
	int	y;
	int	count;
};

char				*read_line(int fd);

struct s_map_config	read_config(char *str);

struct s_map_config	read_mapfile(char *filename);

int					**map_to_array(struct s_map_config config);

struct s_result		ft_find_square(struct s_map_config config, int **map);
struct s_result		ft_update_result(int count, int x, int y);
#endif
