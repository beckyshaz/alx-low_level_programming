#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - function that converts binary to unsigned int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: converted number if success else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decimal, decvalue, strlen;

	decimal = 0;
	decvalue = 1;

	if (b == NULL)
		return (0);
	while (b[strlen] != '\0')
		strlen++;
	for (i = (strlen - 1); b[i] >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += decvalue;
			decvalue *= 2
		}
	}
	return (decimal);
}
