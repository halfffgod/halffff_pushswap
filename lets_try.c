#include "push_swap.h"

t_list	*create_node(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (new == NULL)
		exit(1);
	new->data = value;
	new->next = NULL;
	return (new);
}

void	push(t_list **head, int value)
{
	t_list	*new;

	new = create_node(value);
	new->next = *head;
	*head = new;
}

void	free_list(t_list *head)
{
	t_list	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}
