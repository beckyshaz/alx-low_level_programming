#include "main.h"
/**
 *rev_string -  function that reverses a string
 *@s: string to be reversed
 *Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; s[i] < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
