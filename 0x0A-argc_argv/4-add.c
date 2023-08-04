#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: Number of arguments passed
 *@argv: Array of pointers to a string, arguments
 *Return: 0 (Success)
 *Otherwise 1 (Error)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int a;
	int b;
	int result;

	if (argv[1] == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = (a + b);
		printf("%d\n", result);
	}
	return (0);
}
