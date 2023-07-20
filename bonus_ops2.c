/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ops2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:05:44 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/18 19:02:05 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"
#include "push_swap.h"

void	rr_b(t_list **a_list, t_list **b_list)
{
	ra_rb_b(a_list);
	ra_rb_b(b_list);
}

void	rra_rrb_b(t_list **list)
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
	}
}

void	rrr_b(t_list **a_list, t_list **b_list)
{
	rra_rrb_b(a_list);
	rra_rrb_b(b_list);
}
