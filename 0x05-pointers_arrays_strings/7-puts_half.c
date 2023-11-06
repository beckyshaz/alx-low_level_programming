#include "main.h"

/**
 *puts_half -  function that prints half of a string, it prints 2nd half
 *@str: string to be printed
 *Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int str_half;
	int len = 0;

	while (str[len] != '\0')
		len++;
	str_half = len / 2;
	for (i = str_half; i < len; i++)
	{
		if (i
		_putchar(str[i]);
	}
	_putchar('\n');
}
