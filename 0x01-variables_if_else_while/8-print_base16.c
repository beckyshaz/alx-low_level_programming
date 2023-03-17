#include <stdio.h>
/**
 *main - entry point
 *Return: 0 (success)
 *to print hexadecimals
 */
int main(void)
{
	int c;

	c = '0';
		while (c <= '9')
		{
			putchar(c);
			 c++;

		}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	{
		putchar('\n');
	}
	return (0);



}
