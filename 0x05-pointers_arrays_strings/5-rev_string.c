#include "main.h"
/**
 *rev_string -  function that reverses a string
 *@s: string to be reversed
 *Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int length;
	char temp;

	for (length = 0;  s[length] != '\0'; length++)
	for (i = 0; s[i] < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i];
		s[length - i] = temp;
	}
}
