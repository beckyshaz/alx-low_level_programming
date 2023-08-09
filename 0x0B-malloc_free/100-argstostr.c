#include "main.h"
#include <stdlib.h>

/**
 *argstostr - function that concatenates all the arguments of your program
 *@ac: Number of arguments
 *@av: Array of pointers to a string
 *Return: 0 (success)
 *Otherwise NUll
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *ptrstr;
	int len = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	ptrstr = malloc(sizeof(char) * len + 1);
	if (ptrstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptrstr[k] = av[i][j];
			k++;
		}
		if (ptrstr[k] == '\0')
		{
			ptrstr[k++] = '\n';
		}
	}
	return (ptrstr);
}
