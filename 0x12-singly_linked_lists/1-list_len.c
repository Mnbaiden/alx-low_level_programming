#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int coun = 0;

	while (h)
	{
		coun++;
		h = h->next;
	}
	return (coun);
}
