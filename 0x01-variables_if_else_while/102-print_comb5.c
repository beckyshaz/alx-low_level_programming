#include <stdio.h>
/**
 *main - Entry point for the program
 *Return: 0 Always on success
 */
int main(void)
{
	int i, x, y, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '8'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (i && x < y && z)
					{
						putchar(i);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						if (i != '9' || x != '8' || y != '9' || z != '9')
						{
							putchar(',');
						}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
