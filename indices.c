#include "push_swap.h"

void	index_list(t_list **list, int len)
{
	t_list	*node;
	t_list	*max;
	int		i;

	i = 0;
	node = (*list)->next;
	max = *list;
	while (i < len)
	{
		while (node != NULL)
		{
			if (max->data > node->data && node->index == -1)
				max = node;
			node = node->next;
		}
		max->index = i;
		max = *list;
		node = *list;
		i++;
		while (i < len && max->index != -1)
			max = max->next;
	}
}
