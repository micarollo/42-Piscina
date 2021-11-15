/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curcola- <curcola-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:41:35 by curcola-          #+#    #+#             */
/*   Updated: 2021/11/14 23:17:05 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

# include <stdio.h> 
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	**readfile(char *params);
char	*ft_atoc(const char *str);
char	*ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	print_number(char *num, char **diccionario);
void	print_hundred(char *str, char **diccionario);
void	print_tens(char *str, char **diccionario);
void	print_units(char *str, char **diccionario);
char	*ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	*ft_putnbr(int nb, char *nc);
void	ft_putstr(char	*str);
void	ft_calc_millon(int size, char **diccionario);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
