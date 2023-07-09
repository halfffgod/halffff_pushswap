#include "push_swap.h"

void	bubble_sort_array(int *a, int len)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (a[i] < a[j])
			{
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	fill_idx(t_list **a, int *arr, int len)
{
	int		i;

	while (*a)
	{
		i = 0;
		while ((*a)->data != arr[i] && i < len)
			i++;
		(*a)->index = i;
		*a = (*a)->next;
	}
}

void	index_list(t_list **a)
{
	int		i;
	int		len;
	int		*arr;
	t_list	*lst;

	i = 0;
	lst = *a;
	len = ft_lstsize(*a);
	arr = malloc(len * sizeof(int));
	while (*a && i < len)
	{
		arr[i++] = (*a)->data;
		*a = (*a)->next;
	}
	*a = lst;
	bubble_sort_array(arr, len);
	fill_idx(a, arr, len);
	*a = lst;
	free (arr);
}
