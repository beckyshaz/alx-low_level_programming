#include "main.h"

/**
 *_print_rev_recursion -  function that prints a string in reverse
 *@s: Pointer to the string to be printed
 *Return: 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
