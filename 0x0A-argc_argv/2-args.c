#include <stdio.h>
/**
 *main - Entry point
 *@argc: Number of arguments
 *@argv: Array of pointers to string, arguments
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
