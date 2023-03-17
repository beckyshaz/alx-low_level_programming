#include <stdio.h>
/**
 * main - entry point
 *Return: 0 (success)
 *printing z-a
 */
int main(void)
{

	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;

	}
	{
		putchar('\n');
	}
	return (0);
}




