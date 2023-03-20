#include <stdio.h>
/**
 *main - entry point
 *Return:0 (success)
 *possible combinations of two digits
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			if (x < y && x != y)
		{
			putchar(x);
			putchar(y);
			if (x + y != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

		}
	{
		putchar('\n');

	}
	return (0);


}

