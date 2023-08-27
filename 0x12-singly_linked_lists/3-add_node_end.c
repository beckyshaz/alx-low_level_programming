#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - function that adds new node at the end of  list_t list
 *@head: pointer to the first address of the node
 *@str: string to be added in the node created at the end
 *Return: pointer to the node added at  the end  of list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len(str);
	temp->next = NULL;
	return (temp);
}
/**
 *len - name of function to find length of string
 *@str: string to find its length
 *Return: returns length of string
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
