#include "main.h"
/**
 *times_table - function that prints the 9 times table
 *Return: Always 0
 *
 */
void times_table(void)
{
	int num;
	int multi;

	for (num = 0; num <= 9 ; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		multi = num * num;
	{
		_putchar(num + '0');
		_putchar(multi + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
	}
}

