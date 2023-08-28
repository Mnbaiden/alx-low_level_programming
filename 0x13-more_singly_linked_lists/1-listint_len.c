#include "lists.h"

/**
 * listint_len - number of elments in a linked listint_t list.
 *
 * @h: the headpointer
 *
 * Return: the number of elements; cnt
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
	h = h->next;
		cnt++;
	}
	return (cnt);
}
