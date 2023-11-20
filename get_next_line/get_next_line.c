/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:57:08 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/11/16 12:21:55 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0) < 0)
	{
		ft_update_buffer(buffer, 1);
		return (NULL);
	}
	line = ft_read(fd, buffer, NULL);
	return (line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("read_error", O_RDONLY);
	line = get_next_line(fd);
	printf("★ %s", line);
	free(line);
	line = get_next_line(fd);
	printf("★ %s", line);
	free(line);
	line = get_next_line(fd);
	printf("★ %s", line);
	free(line);
	line = get_next_line(fd);
	printf("★ %s", line);
	free(line);
	return (0);
}
