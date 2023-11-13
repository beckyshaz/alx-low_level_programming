#include "main.h"
/**
 *_memset - function that fills memory area with a constant byte
 *@s: pointer to the memory area
 *@b: constant byte to fill the memory area with
 *@n: memory area to be filled
 *Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
