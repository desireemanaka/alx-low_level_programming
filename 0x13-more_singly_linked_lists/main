#include "lists.h"

/* Function to print all elements in the linked list */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}

/* Function to add a new node at the beginning of the linked list */
listint_t *add_nodeint(listint_t **head, int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
