#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - returns the index of the first element if cmp = true
 *@array : is the elements to be searched
 *@size :  is the number of elements in the array
 *@cmp : is a pointer to the function to be used to compare values
 *Return: 1 if true, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
