#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of elements to concatenate
 *Return: 0 (Success)
 *otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pstr;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	pstr = malloc(sizeof(char) * (i + j + 1));
	if (pstr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		pstr[k] = s1[k];
	for (k = 0; k < j; k++)
		pstr[k + i] = s2[k];
	pstr[i + j] = '\0';
	return (pstr);
}
