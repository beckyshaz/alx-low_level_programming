#include "main.h"
/**
 *_strspn - function that gets length of a prefix substring
 *@s: pointer to string to be checked
 *@accept: pointer to the string containing chars to be accepted
 *Return: number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, i, val, checks;

	val = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		checks = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[index] == accept[i])
			{
				val++;
				checks = 1;
			}
		}
		if (checks == 0)
			return (val);
	}
	return (val);
}
