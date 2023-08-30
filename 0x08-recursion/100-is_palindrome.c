#include "main.h"

int check_pal(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 *is_palindrome - checks if string is palinrome or not
 *@s: string to be reversed
 *Return: 1 success 0 not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *_strlen_recursion - returns string length
 *@s: string
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_pal - performs recursive check on characters
 *@s: string to be checked
 *@i: index iterator
 *@l: string length
 *Return: 1 success 0 not
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pal(s, i + 1, l - 1));
}
