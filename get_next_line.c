/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:01:37 by nbadalia          #+#    #+#             */
/*   Updated: 2023/04/18 11:52:13 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*rem;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(rem);
		free(buffer);
		rem = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_buffer(fd, rem, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	rem = set_line(line);
	return (line);
}

char	*set_line(char *line_buffer)
{
	char	*rem;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	rem = ft_substr_b(line_buffer, i + 1, ft_strlen_b(line_buffer) - i);
	if (*rem == 0)
	{
		free(rem);
		rem = NULL;
	}
	line_buffer[i + 1] = 0;
	return (rem);
}

char	*fill_buffer(int fd, char *rem, char *buffer)
{
	ssize_t		read_buf;
	char		*tmp;

	read_buf = 1;
	while (read > 0)
	{
		read_buf = read(fd, buffer, BUFFER_SIZE);
		if (read_buf == -1)
		{
			free(rem);
			return (NULL);
		}
		else if (read_buf == 0)
			break ;
		buffer[read_buf] = 0;
		if (!rem)
			rem = ft_strdup_b("");
		tmp = rem;
		rem = ft_strjoin_b(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr_b(buffer, '\n'))
			break ;
	}
	return (rem);
}
/*int   main()
{
	int   fd1;
	char *line = NULL;

	fd1 = open("lorem.txt", O_RDONLY);
	line = get_next_line(fd1);
	printf("%s\n", line);
	line =get_next_line(fd1);
	printf("%s\n", line);
	while(1)
		;
  return (0);
}*/