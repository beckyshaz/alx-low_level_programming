#include <stdio.h>

/**
 *main - Entry
 *@argc: Number of arguments
 *@argv: Array of pointers of strings, arguments
 *Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
