#include "main.h"
/**
 *_strpbrk - function that searches a string for any set of bytes
 *@s: pointer to string to be checked
 *@accept: pointer to string containing chars to e checked
 *Return: pointer to bytes in s that matches one of the bytes in accept
 *NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index, i;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[index] == accept[i])
				return (s + index);
		}
	}
	return (NULL);
}
