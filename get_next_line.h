/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:21:04 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/09 16:21:50 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

/* Fonction principale */

char	*get_next_line(int fd);

/* Fonctions utiles */

char	*ft_join(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);

#endif
