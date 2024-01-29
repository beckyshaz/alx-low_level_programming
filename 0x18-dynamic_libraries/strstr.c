#include "main.h"
/**
 *_strstr - function that finds first occurrence of substring needle
 *in the string haystack
 *@haystack: string to be searched
 *@needle: substring to find in string
 *Return: pointer to the beginning of the located substring
 *NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index, i;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[index] == needle[i])
				return (needle);
		}
	}
	return (NULL);
}
