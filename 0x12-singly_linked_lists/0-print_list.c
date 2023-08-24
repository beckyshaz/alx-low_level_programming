#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - name of function to print elements of a list_t list
 *@h: ponter to the address of the first node
 *Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	for (count = 0; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len,  "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (count);
}
