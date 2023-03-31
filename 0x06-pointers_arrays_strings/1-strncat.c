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
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n && n <= srclen; i++)
		dest[destlen + 1] = src[i];

	return (dest);
}
