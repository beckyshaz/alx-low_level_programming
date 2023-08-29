#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of a listint_t
 *@head: pointer to the first node of linked list
 *@index: is the index of the node, starting at 0
 *Return: nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
