#include <stdio.h>
/**
 *main - entry point
 *Return: 0 (success)
 *print numbers 0-9
 */
int main(void)
{
	char x;

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
