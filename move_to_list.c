/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:00:52 by nbadalia          #+#    #+#             */
/*   Updated: 2023/07/06 16:12:24 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int value, int index)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = value;
		node->index = index;
		node->next = NULL;
	}
	return (node);
}

/*void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}*/

t_list	*array_to_list(int *arr, int size)
{
	t_list	*a;
	t_list	*lst;
	t_list	*new_node;
	int		i;

	a = NULL;
	lst = NULL;
	i = -1;
	while (++i < size)
	{
		new_node = create_node(arr[i], i);
		if (!new_node)
			errors();
		if (a == NULL)
		{
			a = new_node;
			lst = new_node;
		}
		else
		{
			lst->next = new_node;
			lst = new_node;
		}
	}
	//free_leaks(new_node);
	return (a);
}
