#include "lists.h"

/**
 * custom_add_nodeint - adds a new node at the beginning of a linked list
 * @list_head: pointer to the first node in the list
 * @data: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *custom_add_nodeint(listint_t **list_head, const int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = *list_head;
	*list_head = new_node;
	return (new_node);
}

