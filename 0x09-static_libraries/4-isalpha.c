#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *_isalpha - checks  for alphabetic character
 *@c: character to be checked
 *Return:1 if is an alphabetic character otherwise returns:0
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 132))
                return (1);
        else
                return (0);
}
