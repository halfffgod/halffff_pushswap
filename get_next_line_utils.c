/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:01:53 by nbadalia          #+#    #+#             */
/*   Updated: 2023/04/18 10:56:50 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_b(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup_b(const char *s1)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen_b((char *)s1) + 1));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin_b(char const *s1, char const *s2)
{
	char		*str;
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen_b(s1) + ft_strlen_b(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr_b(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ft_strlen_b(s))
		len = ft_strlen_b(s);
	if (s == '\0')
		return (0);
	str = (char *)malloc(len + 1);
	if (str == '\0')
		return (0);
	while (i < len && start < ft_strlen_b(s))
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr_b(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)(s + i));
	return (NULL);
}
