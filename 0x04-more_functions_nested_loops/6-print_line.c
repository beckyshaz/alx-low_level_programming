#include "main.h"
/**
 * print_line - unction that draws a straight line in the terminal
 *Return: Always 0
 *@n:  is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
