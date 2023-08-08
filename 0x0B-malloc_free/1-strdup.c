#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a new string which is a duplicate of
 *string str
 *@str: String to be copied
 *Return: 0 (Success)
 *Otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptrstr;
	int strlen = 0;
	int i = 0;

	while (str[strlen] != '\0')
		strlen++;
	ptrstr = malloc((strlen * sizeof(char)) + 1);
	if (ptrstr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] <= strlen)
		i++;
	 ptrstr[i] = str[i];
	 ptrstr = '\0';
	return (ptrstr);
	free(ptrstr);
}
