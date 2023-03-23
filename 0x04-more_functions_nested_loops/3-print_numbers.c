#include "main.h"
/**
 * print_numbers - function that prints the numbers
 *Return: Always 0
 *
 */
void print_numbers(void)
{
	char x;

	x = '0';

	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
