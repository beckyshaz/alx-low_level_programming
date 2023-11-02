#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: s the number of times the character \ should be printed
 *Return: Always 0
 */
void print_diagonal(int n)
{
	int m, index;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			for (index = 0; index < m; index++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
