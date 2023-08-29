#include "lists.h"
/**
 *listint_len - function that returns number of elements in linked listint_t
 *@h: pointer to the address of the first element
 *Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
