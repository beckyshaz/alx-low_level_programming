#include <stdio.h>
/**
 *rot13 - function to encode a string in rot13
 *@s: string to be encoded
 *Return: an encoded string
 */
char *rot13(char *s)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ca[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			{
				s[i] = ca[j];
				break;
			}
		}
	}
	return (s);

}
