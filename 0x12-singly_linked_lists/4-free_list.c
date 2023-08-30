#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function that frees a list_t list
 *@head: pointer to the first node of the list
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *hold;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
	free(head->str);
	free(head);
}
