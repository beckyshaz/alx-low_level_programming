#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f : pointer to a fuction that prints a name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (name == NULL || f == NULL)
		return;
}
