/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_below_13.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:47:54 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/07 14:48:17 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = (*a)->data;
	a2 = (*a)->next->data;
	a3 = (*a)->next->next->data;
	if (a1 > a2 && a2 < a3)
	{
		if (a1 < a3)
			sa_sb(a, 1);
		else if (a1 > a3)
			ra_rb(a, 1);
	}
	else if (a2 > a3 && a1 > a3)
	{
		if (a1 > a2)
			sa_sb(a, 1);
		rra_rrb(a, 1);
	}
	else if (a1 < a2 && a2 > a3 && a1 < a3)
	{
		sa_sb(a, 1);
		ra_rb(a, 1);
	}
}

void	sort_four(t_list **a, t_list **b)
{
	int	i;

	i = maximum(a);
	if (i == 3)
		rra_rrb(a, 1);
	else if (i == 2)
	{
		rra_rrb(a, 1);
		rra_rrb(a, 1);
	}
	else
		if (i == 1)
			ra_rb(a, 1);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	ra_rb(a, 1);
}

void	sort_five(t_list **a, t_list **b)
{
	int	i;

	i = maximum(a);
	if (i == 4)
		rra_rrb(a, 1);
	else if (i == 3)
	{
		rra_rrb(a, 1);
		rra_rrb(a, 1);
	}
	else if (i == 2)
	{
		ra_rb(a, 1);
		ra_rb(a, 1);
	}
	else if (i == 1)
		ra_rb(a, 1);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
	ra_rb(a, 1);
}

void	sorting(t_list **a, t_list **b, int size)
{
	if (size == 2)
		sa_sb(a, 1);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else if (size >= 6 && size <= 100)
	{
		butterfly(a, b, 15);
		push_to_stack_a(a, b, size);
	}
	else if (size > 100 && size < 500)
	{
		butterfly(a, b, 30);
		push_to_stack_a(a, b, size);
	}
	else if (size >= 500)
	{
		butterfly(a, b, 40);
		push_to_stack_a(a, b, size);
	}
}