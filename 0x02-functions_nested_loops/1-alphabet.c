#include "main.h"
/**
 *main- entry point
 *print_alphabet:fuction that prints alphabet in lowercase
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
