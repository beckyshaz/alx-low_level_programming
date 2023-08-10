#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers
 *@min: minimum number of values in the array array
 *@max: maximum number of values in the array
 *Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int len;

	if (min > max)
		return (NULL);
	len = ((max - min) + 1);
	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
