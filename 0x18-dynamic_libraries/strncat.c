#include "main.h"
/**
 * *_strncat -  function that concatenates n strings
 *@dest: where concatenated string is to be printed
 *@src: where the concatenated string is from
 *Return: pointer to the resulting string
 *@n: number of characters to be concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
