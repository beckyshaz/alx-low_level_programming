#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a:pointer to an integer to be swapped
 *@b:pointer to an integer to be swapped
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
	*a = -*b;
	*b = -*a;
}
