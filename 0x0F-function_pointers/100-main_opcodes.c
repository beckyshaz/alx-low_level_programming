#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point of opcode
 *@argc: number of arguments
 *@argv: pointer to array of arguments
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byts, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;

	for (i = 0; i < byts; i++)
	{
		if (i == byts - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
