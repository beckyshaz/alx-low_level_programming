#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: nothing
 */
int main(void)
{
	long int index, d;
	long int n = 1231952;

	for (index = 1; index <= n; index++)
	{
		if (n % index == 0)
		{
			if (n == index)
			{
				printf("%ld\n", index);
				break;
			}
			d = n / index;
			n = d;
		}
	}
	return (0);
}
