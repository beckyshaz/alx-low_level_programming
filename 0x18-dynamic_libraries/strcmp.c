#include "main.h"

/**
 *_strcmp - function to compare two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if it matches else -ve or +ve
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] < s2[index])
				return (s1[index] - s2[index]);
			else if (s1[index] > s2[index])
				return (s1[index] - s2[index]);
		}
	}
	return (0);
}
