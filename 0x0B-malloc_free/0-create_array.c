#include "main.h"
#include <stdlib.h>

/**
 *create_array -  function that creates an array of chars, and initializes it
 *with a specific char
 *@size: Size of Array
 *@c: Character to initialize the array
 *Return: 0 (Success)
 *Otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptrarray;
	unsigned int i;

	ptrarray = malloc(sizeof(char) * size);
	if (ptrarray == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptrarray[i] = c;
	}

	return (ptrarray);
}
