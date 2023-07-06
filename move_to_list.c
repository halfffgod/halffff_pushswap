#include "push_swap.h"

t_list *create_node(int value, int index)
{
    t_list *node = malloc(sizeof(t_list));
    if (node)
    {
        node->data = value;
        node->index = index;
        node->next = NULL;
    }
    return node;
}

void print_list(t_list *head)
{
    t_list *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

t_list *array_to_list(int *arr, int size)
{
    t_list *a = NULL;
    t_list *lst = NULL;
    int i = 0;

    while (i < size)
    {
        t_list *new_node = create_node(arr[i], i);
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
        i++;
    }

    return a;
}