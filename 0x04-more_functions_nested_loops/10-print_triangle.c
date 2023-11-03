#include "main.h"
/**
 *print_triangle - function that prints a triangle
 *@size: size of the triangle to be printed
 *Return: nothing
 */
void print_triangle(int size)
{
	int index, i;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (index = 0; index < size; index++)
		{
			for (i = 1; i <= index; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
