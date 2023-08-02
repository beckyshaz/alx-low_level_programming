#include "main.h"

/**
 *_puts_recursion -  function that prints a string
 *@s: Pointer to the string to be printed
 *Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
