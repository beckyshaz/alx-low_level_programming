#include <stdio.h>
#include "search_algos.h"

/**
 *linear_search - name of function that returns serched value
 *@array: array to be searched
 *@size: size of array to search
 *@value: value to be searched
 *Return: the searched value if found
 *else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
		if (i >= size)
			return (-1);
	}
	return (value);
}
