#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - function that computes the absolute value of an integer.
 *@k: parameter to be checked
 *Return: Always 0
 */
int _abs(int k)
{

        if (k < 0)
                k = -k;
        return (k);
}
