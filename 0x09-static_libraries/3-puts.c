#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *_puts -  a function that prints a string
 *@str: - parameter to be printed
 *Return: Always 0
 */
void _puts(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
                _putchar(str[i]);
        _putchar('\n');
}
