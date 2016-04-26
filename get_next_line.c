/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 22:42:48 by clapeyre          #+#    #+#             */
/*   Updated: 2016/04/22 15:47:23 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		ft_free(char **save_line, char **line)
{
	*line = ft_strdup(*save_line);
	free(*save_line);
	*save_line = NULL;
}

static int		ft_send(char **line, char **save_line, char *cut_fd)
{
	*line = *save_line;
	*cut_fd = '\0';
	*save_line = ft_strdup(cut_fd + 1);
	return (1);
}

static void		ft_join(char **save_line, char *buffer)
{
	char *tmp;

	tmp = NULL;
	tmp = ft_strjoin(*save_line, buffer);
	free(*save_line);
	*save_line = tmp;
}

int				get_next_line(int const fd, char **line)
{
	char		buffer[BUFF_SIZE + 1];
	static char	*save_line[1024];
	char		*cut_fd;
	int			nb;

	if (fd < 0 || fd > 1023 || line == NULL
		|| (read(fd, NULL, 0) == -1))
		return (-1);
	if (!save_line[fd])
	{
		if ((nb = read(fd, buffer, BUFF_SIZE)) <= 0)
			return (nb);
		buffer[nb] = '\0';
		save_line[fd] = ft_strdup(buffer);
	}
	while (!(ft_strchr(save_line[fd], '\n')) &&
			(nb = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[nb] = '\0';
		ft_join(save_line + fd, buffer);
	}
	if ((cut_fd = ft_strchr(save_line[fd], '\n')))
		return (ft_send(line, &save_line[fd], cut_fd));
	ft_free(&save_line[fd], line);
	return (ft_strlen(*line) > 0);
}
