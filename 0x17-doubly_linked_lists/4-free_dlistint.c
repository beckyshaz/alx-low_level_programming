#include"lists.h"
#include <stdlib.h>
/**
 *free_dlistint - function to free linked list memory created using malloc
 *@head: pointer to the first node
 *Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
