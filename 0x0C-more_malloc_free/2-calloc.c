#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array
 *@nmemb: number of elements in the array
 *@size: size of the array
 *Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pcall;
	int  i;
	int s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = (nmemb * size);
	pcall = malloc(s);
	if (pcall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		pcall[i] = 0;
	}
	return (pcall);
}
