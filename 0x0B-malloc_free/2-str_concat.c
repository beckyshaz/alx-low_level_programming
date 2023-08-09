#include "main.h"
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings
 *@s1: String to be attached with string 2
 *@s2: String to be attached to string 1
 *Return: 0 (Success)
 *Otherwise (NULL)
 */
char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i = 0;
	int i2 = 0;
	int count;
	int count1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	strcat = malloc((sizeof(char) * (i + i2)) + 1);

	if (strcat == NULL)
		return (NULL);
	for (count = 0; s1[count] != '\0'; count++)
		strcat[count] = s1[count];
	while (s2[count1] != '\0')
	{
		strcat[count] = s2[count1];
		count++, count1++;
	}
	strcat[count] = '\0';
	return (strcat);
}
