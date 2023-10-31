#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - function that prints all natural numbers from n to 98
  *@n: natural numbers to be printed
  *Return: Always 0
  */
void print_to_98(int n)
{
	int index;

	if (n >= 0 && n <= 98)
	{
		for (index = n; index <= 98; index++)
		{
			printf("%d", index);
			if (index != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else if (n >= 98)
	{
		for (index = n; index >= 98; index--)
		{
			printf("%d", index);
			if (index != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0 && n <= 98)
	{

		for (index = n; index <= 98; index++)
		{
			printf("%d", index);
			if (index != 98)
				printf(", ");
		}
		printf("\n");
	}
}
