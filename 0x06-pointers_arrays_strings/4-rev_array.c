#include "main.h"
/**
 *reverse_array - function that reverses an array
 *@a:  array to be reversed
 *@n: number of elements to be reversed in the array
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int index, temp;

	n = n - 1;
	for (index = 0; index < n; index++)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
		n--;
	}

}
