/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:26:00 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/02 17:26:07 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void parsing(int argc, char **argv, t_list **a)
{
    int		i;
	char	*h;
	char	**gh;
	int		*igh;

	h = NULL;
	gh = NULL;
	igh = NULL;
	if (argc == 1)
		exit (0);
	h = argv[1];
	if (argc > 2)
	{
		i = 2;
		while (i < argc)
		{
			h = ft_strjoin (h, argv[i]);
			i++;
		}
	}
	check(h);
	gh = ft_split(h, ' ');
	igh = charp_to_int(gh);
	check_sorting(igh, gh_len(gh));
	check_doubles(igh, gh_len(gh));
	*a = array_to_list(igh, gh_len(gh));
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	parsing (argc, argv, &a);
	print_list(a);
	return (0);
}
