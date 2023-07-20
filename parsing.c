/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:46:36 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/20 15:33:56 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	free_chardp(char **gh)
{
	int	i;

	i = 0;
	while (gh[i])
	{
		free(gh[i]);
		i++;
	}
	free(gh);
}

char	*get_h(int argc, char **argv)
{
	char	*h;
	int		i;
	char	*tmp;

	h = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		tmp = ft_strjoin(h, argv[i]);
		free(h);
		h = tmp;
		i++;
	}
	return (h);
}

void	parse_arguments(char *h, t_list **a)
{
	char	**gh;
	int		*igh;
	int		i;

	gh = NULL;
	igh = NULL;
	i = 0;
	check(h);
	gh = ft_split(h, ' ');
	while (gh[i])
	{
		if (ft_atoi(gh[i]) > INT_MAX || ft_atoi(gh[i]) < INT_MIN)
			errors();
		i++;
	}
	igh = charp_to_int(gh);
	check_sorting(igh, gh_len(gh));
	check_doubles(igh, gh_len(gh));
	*a = array_to_list(igh, gh_len(gh));
	free(igh);
	free_chardp(gh);
}

void	parsing(int argc, char **argv, t_list **a)
{
	char	*h;
	int		i;

	i = 1;
	if (argc == 1)
		exit(0);
	check_empty_input(argc, argv);
	h = get_h(argc, argv);
	parse_arguments(h, a);
	free(h);
}

void	check_empty_input(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 0;
	i = 1;
	while (i < argc)
	{	
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ' && argv[i][j + 1] == ' '
			&& !(argv[i][j + 2] >= '0' && argv[i][j + 2] <= '9'))
				k++;
			j++;
		}
		if ((argv[i][k + 1] == '\0'
			&& !(argv[i][k] >= '0'
			&& argv[i][k] <= '9')) || !argv[i][k])
			errors();
		i++;
	}
}
