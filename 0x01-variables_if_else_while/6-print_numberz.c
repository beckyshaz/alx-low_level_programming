#include <stdio.h>
/**
 * main - entry point
 *Return: 0 (success)
 *print numbers without using char
 */
int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	{
		putchar('\n');
	}

	return (0);
}
