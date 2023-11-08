#include "main.h"
/**
 *string_toupper - function to change small letters to uppercase
 *@str: string to be changed small letters to uppercase
 *Return: a string turned to uppercase from lowercase
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = (str[index] - 32);
		}
	}
	return (str);
}
