#include "main.h"
/**
 *_memcpy - function to copy the memory area
 *@src: the source memory area
 *@dest: the destination memory area
 *@n: bytes to be copied from source memory area to dest
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);

}
