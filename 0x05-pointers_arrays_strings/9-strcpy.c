#include "main.h"
#include <stddef.h>

/**
 *_strcpy - function that copies string pointed to by src, including (\0) byte
 *@dest: pointer to where the string is copied to
 *@src: pointer to the string being copied
 *Return: pointer to the destination where string has been copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL || dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
