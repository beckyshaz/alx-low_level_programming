#include "lists.h"
/**
 *sum_listint - function that returns sum of all data (n) of listint_t list
 *@head: pointer to the first node of the linked list
 *Return: sum of all the data of listint_t list
 *and null if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum +  head->n;
		head = head->next;
	}
	return (sum);
}
