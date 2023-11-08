#include "main.h"

/**
 *leet - function that encodes a string
 *@s: string to be encoded
 *Return: encoded string
 */
char *leet(char *s)
{
	char ch[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
