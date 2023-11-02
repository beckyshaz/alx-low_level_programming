#include <stdio.h>
#include "main.h"
/**
 *print_square - function that prints a square
 *@size: size of square to be printed
 *Return: Nothing
 */
void print_square(int size)
{
	int index, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (index = 0; index < size; index++)
		{
			for (i = 1; i < size; i++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
}
