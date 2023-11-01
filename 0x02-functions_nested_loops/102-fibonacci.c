#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: 0 on success
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int next_num;
	int index;

	printf("%lu, ", num1);
	for (index = 1; index < 50; index++)
	{
		printf("%lu", num2);
		if (index != 49)
			printf(", ");
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
	}
	printf("\n");
}
