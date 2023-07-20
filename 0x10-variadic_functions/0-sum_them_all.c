#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - name of function that returns the sum of all its parameters
 *@n :  is the number of integers passed to the function
 *@... :is number of parametersto calculate the sum of
 *Return: if n == 0 - 0
 *otherwise returns sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(add);
	unsigned int i, sum = 0;

	va_start(add, n);
	for (i = 0; i < n; i++)
	sum =  sum + va_arg(add,  int);
	va_end(add);

	return (sum);
}
