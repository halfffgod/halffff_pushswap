/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:05:55 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/13 17:06:22 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	check_sort(t_list *a)
{
	if (!a)
		return (-1);
	while (a->next)
	{
		if (a->data < a->next->data)
			a = a->next;
		else
			return (1);
	}
	return (0);
}

void	check_argv(char **str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] == ' ' && str[i][j] != '\0')
			j++;
		if (str[i][j] == '\0')
		{
			errors();
		}
		i++;
	}
}
