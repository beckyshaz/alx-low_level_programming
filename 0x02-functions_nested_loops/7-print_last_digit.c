#include "main.h"
/**
 *print_last_digit - funtion that print last digit of a number
 *@k: number whose last digit is printed
 *Return: Always 0
 */
int print_last_digit(int k)
{
	int y;

	y = k % 10;
	if (k < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}




