#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *in a given number
 *@n:  the decimal number to be checked
 *@index: bit index
 *Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);
	value_bit = (n >> index) & 1;
	return (value_bit);
}
