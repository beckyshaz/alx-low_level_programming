#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *@head: pointer to the address of the first element of the list
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
	}
}
