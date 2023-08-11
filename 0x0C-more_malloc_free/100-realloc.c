#include "main.h"
#include <stdlib.h>

/**
 *_realloc - function to reallocate memory created by malloc
 *@ptr: pointer created by malloc
 *@old_size: size of memory created by malloc
 *@new_size: size to now be used to allocate memory
 *Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pr;
	unsigned int i;
	unsigned int max = new_size;
	char *oldp = ptr;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		pr = malloc(new_size);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pr = malloc(new_size);
	if (pr == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		pr[i] = oldp[i];
	free(ptr);
	return (pr);
}
