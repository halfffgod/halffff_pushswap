/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:01:46 by nbadalia          #+#    #+#             */
/*   Updated: 2023/04/18 10:56:05 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

size_t	ft_strlen_b(const char *str);
char	*ft_strdup_b(const char *s1);
char	*ft_strjoin_b(char const *s1, char const *s2);
char	*ft_substr_b(const char *s, unsigned int start, size_t len);
char	*ft_strchr_b(const char *s, int c);
char	*fill_buffer(int fd, char *rem, char *buffer);
char	*set_line(char *line_buffer);
char	*get_next_line(int fd);

#endif
