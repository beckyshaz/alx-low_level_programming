#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings
 *@separator :is the string to be printed between the strings
 *@n : is the number of strings passed to the function
 *Return : if string is  0 - nil
 *otherwise print string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list(string);
	char *str;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}


