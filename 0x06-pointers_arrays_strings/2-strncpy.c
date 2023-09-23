#include "main.h"
/**
 *_strncpy - function to copy n number of strings from source to dest
 *@dest: where te n number of strings is copied to
 *@src: where the n number of strings is copied from
 *@n: number of strings to be copied to dest from src
 *Return: string copied and appended in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);

}
