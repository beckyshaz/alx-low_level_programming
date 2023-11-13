#include "main.h"
/**
 *_strchr - function that allocates a char in a string
 *@s: string to allocate char from
 *@c: character to be allocated in the string
 *Return: pointer to the first occurance of char else Null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return (NULL);
}
