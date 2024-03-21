#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - function that adds node at end of list
 *@head: pointer to the first node
 *@n: data to be added
 *Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		newnode->n = n;
		temp->next = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->prev = NULL;
		*head = newnode;
	}
	return (newnode);
}
