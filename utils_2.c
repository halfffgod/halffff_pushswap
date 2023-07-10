/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:29 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/10 11:21:51 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (s == '\0')
		return (0);
	str = (char *)malloc(len + 1);
	if (str == '\0')
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((!(str[i] >= '0' && str[i] <= '9') && str[i] != ' '
				&& str[i] != '+' && str[i] != '-')
			|| ((str[i] == '+' || str[i] == '-')
				&& !(str[i + 1] >= '0' && str[i + 1] <= '9')))
			errors();
		i++;
	}
}

void	errors(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

int	gh_len(char **gh)
{
	int	i;

	i = 0;
	while (gh[i])
		i++;
	return (i);
}

int	*charp_to_int(char **h)
{
	int	i;
	int	*igh;

	i = 0;
	igh = malloc(sizeof(int) * gh_len(h));
	if (!igh)
		return (0);
	while (h[i])
	{
		igh[i] = ft_atoi(h[i]);
		i++;
	}
	return (igh);
}
