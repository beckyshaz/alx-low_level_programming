#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: 0 if successful
 */
int main(void)
{
	int sum = 0;
	int index;

	for (index = 0; index < 1024; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			sum = sum + index;
		}
	}
	printf("%d\n", sum);
	return (0);
}
