#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *  _islower - checks for lowercase character
 *@c: the character to check
 *Return:1 if is a lowercase and  otherwise returns:0
 */
int _islower(int c)
{

        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
