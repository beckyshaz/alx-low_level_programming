#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: s the number of times the character \ should be printed
 *Return: Always 0
 */
void print_diagonal(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}



