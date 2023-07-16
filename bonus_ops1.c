/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ops1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:04:57 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/13 17:04:59 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"
#include "push_swap.h"

void	sa_sb_b(t_list **list)
{
	t_list	*first;
	t_list	*second;

	if (*list)
	{
		first = *list;
		second = first->next;
		first->next = second->next;
		second->next = first;
		(*list) = second;
	}
}

void	ss_b(t_list **a_list, t_list **b_list)
{
	sa_sb_b(a_list);
	sa_sb_b(b_list);
}

void	pa_b(t_list **list_a, t_list **list_b)
{
	t_list	*push;

	push = NULL;
	if (*list_b)
	{
		push = *list_b;
		*list_b = (*list_b)->next;
		push->next = *list_a;
		*list_a = push;
	}
}

void	pb_b(t_list **list_a, t_list **list_b)
{
	t_list	*push;

	push = NULL;
	if (*list_a)
	{
		push = *list_a;
		*list_a = (*list_a)->next;
		push->next = *list_b;
		*list_b = push;
	}
}

void	ra_rb_b(t_list **list)
{
	t_list	*adr;
	t_list	*node;

	adr = NULL;
	node = NULL;
	if ((*list)->next != NULL)
	{
		adr = *list;
		*list = (*list)->next;
		node = *list;
		if (adr)
		{
			while (node->next != NULL)
				node = node->next;
			node->next = adr;
			node->next->next = NULL;
		}
	}
}
