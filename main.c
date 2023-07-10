/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:00 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/10 11:20:30 by nbadalia         ###   ########.fr       */
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

	gh = NULL;
	igh = NULL;
	check(h);
	gh = ft_split(h, ' ');
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

	if (argc == 1)
		exit(0);
	h = get_h(argc, argv);
	parse_arguments(h, a);
	free(h);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	parsing(argc, argv, &a);
	index_list(&a);
	sorting(&a, &b, ft_lstsize(a));
	free_leaks(a);
	return (0);
}
