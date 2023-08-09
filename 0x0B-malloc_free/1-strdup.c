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
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;

	ptrstr = malloc((sizeof(char) * count) + 1);

	if (ptrstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= count; i++)
		ptrstr[i] = str[i];
	return (ptrstr);
}
