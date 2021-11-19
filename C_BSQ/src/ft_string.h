/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalvez- <jgalvez-@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:57:44 by jgalvez-          #+#    #+#             */
/*   Updated: 2021/11/16 15:44:00 by jgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STRING_H
# define FT_STRING_H

int		ft_isspace(char c);

int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src);

char	*ft_strncat(char *dest, char *src, unsigned int n);

#endif
