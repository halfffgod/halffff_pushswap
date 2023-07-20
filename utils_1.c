/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:20 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/20 15:44:20 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	words(char const *s, char c)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	while (*s)
	{
		if (*s != c && t == 0)
		{
			t = 1;
			i++;
		}
		else if (*s == c)
			t = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	if (!s)
		return (0);
	str = (char **)malloc(((words(s, c) + 1)) * sizeof(char *));
	if (!str)
		return (0);
	while (i < words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i++] = ft_substr (s, start, (end - start));
		start = end;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*str;
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = ' ';
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
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

long long	ft_atoi(const	char *str)
{
	long long	n;
	int			sign;
	int			i;

	n = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((sign == 1 && n == 214748364 && str[i] > '7')
			|| (n > 1000000000 && str[i])
			|| (sign == -1 && n == 214748364 && str[i] > '8'))
			errors();
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		errors();
	return (sign * n);
}
