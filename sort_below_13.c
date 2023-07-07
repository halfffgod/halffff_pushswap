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
