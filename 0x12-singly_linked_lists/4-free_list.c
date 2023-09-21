#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @list: Pointer to the list_t list to be freed
 */
void free_list(list_t *list)
{
	list_t *current;

	while (list)
	{
		current = list->next;
		free(list->str);
		free(list);
		list = current;
	}
}
