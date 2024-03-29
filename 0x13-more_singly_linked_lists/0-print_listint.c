#include "lists.h"

/**
 *print_listint - function that prints all the elements of a listint_t list
 *@h: pointer to th address of the first element
 *Return: number of elements in the linked li
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

