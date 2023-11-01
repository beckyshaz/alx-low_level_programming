#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: 0 on success
 */
int main(void)
{
	int sum = 2;
	int num1 = 1;
	int num2 = 2;
	int limit = 4000000;
	int next_num;

	while (next_num < limit)
	{
		next_num = num1 + num2;
		if (next_num % 2 == 0)
			sum = sum + next_num;
		num1 = num2;
		num2 = next_num;
	}
	printf("%d\n", sum);
	return (0);
}
