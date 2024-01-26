#include "lists.h"
#include <stdlib.h>
/**
 *get_dnodeint_at_index function to get node at an index
 *@head: poiner to first node
 *@index: index of the node to get
 *Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		return (head);
	}
}

