/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:35 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/10 08:09:17 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen((char *)s1) + 1));
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

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

void	check_sorting(int *igh, int l)
{
	int	i;

	i = 0;
	while (i < l - 1)
	{
		if (igh[i] > igh[i + 1])
			break ;
		i++;
	}
	if (i == l - 1)
		exit(0);
}

void	check_doubles(int *igh, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l - 1)
	{
		j = i + 1;
		while (j < l)
		{
			if (igh[i] == igh[j])
				errors();
			j++;
		}
		i++;
	}
}

void	free_leaks(t_list *a)
{
	t_list	*next;

	while (a != NULL)
	{
		next = a->next;
		free(a);
		a = next;
	}
}
