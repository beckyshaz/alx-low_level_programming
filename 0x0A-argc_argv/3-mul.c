#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: Number of arguments
 *@argv: Array of pointers to string, arguments
 *Return: 0 (success)
 *Otherwise return 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = (a * b);
		printf("%d\n", result);
	}
	return (0);
}
