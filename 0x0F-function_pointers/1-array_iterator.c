#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function given as a parameter
 *@array : elements of the array being acted on
 *@size_t size - is the size of the array
 *@action : is a pointer to the function you need to use
 *@size : is the size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}

