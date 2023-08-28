#include "lists.h"

/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer (doub_pointer)
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *doub_pointer;

	if (head == NULL)
		return (NULL);
	doub_pointer = malloc(sizeof(listint_t));
	if (doub_pointer == NULL)
		return (NULL);
	doub_pointer->n = n;
	doub_pointer->next = *head;
	*head = doub_pointer;
	return (doub_pointer);
}
