/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:01:39 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/18 18:47:01 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	get_ops(char *op, t_list **a, t_list **b)
{
	if (ft_strcmp(op, "sa\n") == 0)
		sa_sb_b(a);
	else if (ft_strcmp(op, "sb\n") == 0)
		sa_sb_b(b);
	else if (ft_strcmp(op, "ss\n") == 0)
		ss_b(a, b);
	else if (ft_strcmp(op, "pa\n") == 0)
		pa_b(a, b);
	else if (ft_strcmp(op, "pb\n") == 0)
		pb_b(a, b);
	else if (ft_strcmp(op, "ra\n") == 0)
		ra_rb_b(a);
	else if (ft_strcmp(op, "rb\n") == 0)
		ra_rb_b(b);
	else if (ft_strcmp(op, "rr\n") == 0)
		rr_b(a, b);
	else if (ft_strcmp(op, "rra\n") == 0)
		rra_rrb_b(a);
	else if (ft_strcmp(op, "rrb\n") == 0)
		rra_rrb_b(b);
	else if (ft_strcmp(op, "rrr\n") == 0)
		rrr_b(a, b);
	else
		errors();
}

void	result(t_list *a, t_list *b)
{
	if (check_sort(a) == 0 && b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*ops;

	a = malloc(sizeof(t_list));
	b = NULL;
	if (argc < 2)
		return (0);
	check_argv(argv);
	parsing(argc, argv, &a);
	while (1)
	{
		ops = get_next_line(0);
		if (!ops)
			break ;
		get_ops(ops, &a, &b);
		free(ops);
	}
	result(a, b);
}
