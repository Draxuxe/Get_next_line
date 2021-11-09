/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:20:53 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/09 16:22:48 by lfilloux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_save()
{

}

char	*gnl(char **line, int result, int nl)
{
	char	*save;
	size_t	i;

	i= 0;
	while (line[i] != '\n')
	{
		
	}
	save = ft_join(save, *line);
	return (get_save())
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*buffer;
	int			result;
	int			nl;

	if (!fd || BUFFER_SIZE < 0)
		return (-1);
	nl = 0;
	if (!buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1))
		return (-1);
	result = reader(fd, buffer, BUFFER_SIZE);
	if (result < 0)
		return (-1);
	return (gnl(&(save[fd]), result, nl));
}
