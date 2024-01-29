#include "main.h"
/**
 *_puts -  a function that prints a string
 *@s: - parameter to be printed
 *Return: Always 0
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
