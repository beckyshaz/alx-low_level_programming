#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked -  function that allocates memory using malloc
 *@b: What memory is being allocated for
 *Return: void
 *Otherwise NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptrmalloc;

	ptrmalloc = malloc(b);
	if (ptrmalloc == NULL)
	{
		exit(98);
	}
	return (ptrmalloc);
}
