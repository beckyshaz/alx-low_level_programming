#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint -  function that adds a new node at the beginning of a list
 *@head: head pointer
 *@n: data in the list
 *Return: pointer to te newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
