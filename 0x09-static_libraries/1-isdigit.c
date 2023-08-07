#include "main.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - function that checks for a digit
 *@c: digit being checked
 *Return:1 if c is a digit otherwise returns :0
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
