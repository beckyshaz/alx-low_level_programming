#include "lists.h"

/**
 *add_nodeint - function that adds newnode at beginning of listint_t list
 *@head: pointer to the first address of the listint_t list
 *@n: data in the listint_t list
 *Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	return (newnode);
}
