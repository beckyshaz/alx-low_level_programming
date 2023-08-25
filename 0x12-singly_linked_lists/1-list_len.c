#include "lists.h"
#include <stdio.h>
/**
 *list_len - function that returns the number of elements in a linked list
 *@h: pointer to the singl linked list
 *Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count + 1);
}
