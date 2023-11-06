#include "main.h"

/**
 *puts_half -  function that prints half of a string, it prints 2nd half
 *@str: string to be printed
 *Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	while (str[len] != '\0')
		len++;
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
