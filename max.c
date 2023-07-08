#include "push_swap.h"

#include "push_swap.h"

/*int maximum(t_list **list)
{
	int		i;
	int		j;
	int		max;
	t_list	*node;

	i = 0;
	j = 0;
	node = *list;
	max = node->index;
	node = node->next;
	while (node)
	{
		if (max < node->index)
		{
			max = node->index;
			node = node->next;
			j = ++i;
		}
		else
		{
			node = node->next;
			i++;
		}
	}
	return (j);
}*/


int maximum(t_list **list)
{
	int     max;
	t_list  *node;
	int     idx;

    max = (*list)->index;
    node = (*list)->next;
    idx = 1;
	while (node != NULL)
	{
		if (node->index > max)
			max = idx;
		node = node->next;
		idx++;
	}

	return max;
}

void	push_to_stack_a(t_list **a, t_list **b, int size)
{
	int	max;

	max = 0;
	while (*b)
	{
		max = maximum(b);
		if (max <= size / 2)
		{
			while (max-- >= 1)
				ra_rb(b, 2);
			pa(a, b);
			size--;
		}
		else if (max > size / 2)
		{
			while (size - max)
			{
				rra_rrb(b, 2);
				max++;
			}
			pa(a, b);
			size--;
		}
	}
}
