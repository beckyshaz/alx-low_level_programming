#include "main.h"
/**
 *print_binary - function that prints a binary number
 *@n: variable holdin number to be printed
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int counter = 0, index;

	for (index = 63; index >= 0; index--)
	{
		num = n >> index;
		if (num & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');

}
