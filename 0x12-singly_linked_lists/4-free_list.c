#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: pointer to first node of list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->nxt);
		if (head->str)
			free(head->str);
		free(head);
	}
}
