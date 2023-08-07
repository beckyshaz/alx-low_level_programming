#include "main.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 **_strcat - function appends the src string to the dest string
 *@dest: where string is being appended
 *@src:where the string being appended is from
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
        int destlen = 0;
        int srclen = 0;
        int i;

        for (i = 0; dest[i] != '\0'; i++)
                destlen++;
        for (i = 0; src[i] != '\0'; i++)
		  srclen++;
        for (i = 0; i <= srclen; i++)
                dest[destlen + i] = src[i];
        return (dest);
}
