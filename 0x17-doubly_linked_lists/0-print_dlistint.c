#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - function that prints all elements of a dlistint_t list
 *@h: head pointer tof the list
 *Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
