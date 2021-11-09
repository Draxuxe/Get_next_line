/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:21:29 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/09 16:22:26 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_join(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest)
	{
		while (s1[i])
			dest[j++] = s1[i++];
		i = 0;
		while (s2[i])
			dest[j++] = s2[i++];
		dest[j] = '\0';
		return (dest);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest)
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i ++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
