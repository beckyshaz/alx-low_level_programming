#include <stdio.h>
#include "search_algos.h"
/**
 *binary_search - a function to search a value in an array
 *using binary search algorithm
 *@array: array to search from
 *@size: size of the array
 *@value: value to be searched in the array
 *Return: the searched value if successful else
 *returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r, l, mid;

	l = 0;
	r = size - 1;

	if (array == NULL)
		return (-1);
	while (l < r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: %ld %ld %ld\n", r, l, mid);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
