#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - function that adds new node at the beginning of  list_t list
 *@head: pointer to the address of the first node
 *@str: string to be added as data to the node
 *Return: pointer to the address of the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	return (*head);
}
/**
 *len - name of function to find length of string
 *@str: string to find its length
 *Return: length of string
 */
int len(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
