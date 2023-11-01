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
	int index, next_num;

	for (index = 1; index < limit; index++)
	{
		if (index % 2 == 0)
			sum = sum + index;
		next_num = num2 + num1;
		num1 = num2;
		num2 = next_num;
	}
	printf("%d\n", sum);
	return (0);
}
