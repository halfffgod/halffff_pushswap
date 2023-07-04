/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:00:57 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/04 14:01:12 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **a_list, t_list **b_list)
{
	ra_nd_rb(a_list);
	ra_nd_rb(b_list);
	write(1, "rr\n", 3);
}

void	rra_nd_rrb(t_list **list, int i)
{
	t_list	*adr;
	t_list	*t1;
	t_list	*t2;

	if (*list)
	{
		adr = *list;
		t1 = *list;
		while (adr->next != NULL)
		{
			t2 = adr;
			adr = adr->next;
		}
		t2->next = NULL;
		adr->next = t1;
		*list = adr;
		if (i == 1)
			write(1, "rra\n", 4);
		else if (i == 2)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **a_list, t_list **b_list)
{
	rra_nd_rrb(a_list);
	rra_nd_rrb(b_list);
	write(1, "rrr\n", 4);
}
