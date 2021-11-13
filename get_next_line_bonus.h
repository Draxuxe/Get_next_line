/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:10:52 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/13 13:41:55 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

/* Fonction principale */

char	*get_next_line(int fd);

/* Fonctions utiles */

size_t	ft_strlen(const char *s);
int		ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
