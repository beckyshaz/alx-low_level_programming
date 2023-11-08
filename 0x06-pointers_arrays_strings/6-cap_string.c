#include "main.h"
/**
 *cap_string - function that capitalises a string
 *@s: string to consider capitalising
 *Return: a string that has gone through capitalisation
 */
char *cap_string(char *s)
{
	char ch[] = {44, 59, 46, '!', 63, '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	for (j = 0; ch[j] != '\0'; j++)
	{
		if (ch[j] == s[i] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	}
	return (s);
}
