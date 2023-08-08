#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *@argc: Number of arguments
 *@argv: Array of pointers to character string
 *Return: 0 (Success)
 *Otherwise 1
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int mincoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}
