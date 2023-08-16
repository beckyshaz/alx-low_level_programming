#include "3-calc.h"
/**
 *main - Entry point
 *@argc: number of arguments passed
 *@argv: array of the arguments passed
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);

	return (0);
}
