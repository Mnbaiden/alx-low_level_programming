#include "lists.h"

/**
 * free_list - free single list link
 * @head: pointer to first node of the list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *crn;

	while ((crn = head) != NULL)
	{
		head = head->next;
		free(crn->str);
		free(crn);
	}
}
