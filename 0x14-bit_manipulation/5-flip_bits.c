#include "main.h"

/**
 *flip_bits - function that checks number of bit needed to flipped
 *to get from one number to another
 *@n: 1st number
 *@m: 2nd number
 *Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numb;
	unsigned long int excl = n ^ m;
	int counter = 0, index;

	for (index = 63; index >= 0; index--)
	{
		numb = excl >> index;
		if (numb & 1)
			counter++;
	}
	return (counter);
}
