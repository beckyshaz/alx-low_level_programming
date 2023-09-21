#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - function that converts binary to unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: converted number if success else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int index;

	if (!b)
		return (0);
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[index] - '0');
	}
	return (decimal_value);
}
