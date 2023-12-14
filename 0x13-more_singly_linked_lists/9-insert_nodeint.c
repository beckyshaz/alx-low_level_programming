#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new node at
 * a given position
 *@head: pointer to a pointer of the first node in the linked list
 *@idx: index of the list where the new node should be added
 *@n: data of the linked list
 *Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
