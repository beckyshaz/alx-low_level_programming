#include "lists.h"

/**
 *add_nodeint_end - function that adds newnode at the end of listint_t list
 *@head: pointer to the first element of the list
 *@n: data to be included in the list;
 *Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
