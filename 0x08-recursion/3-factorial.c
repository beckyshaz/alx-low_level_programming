#include "main.h"

/**
 *factorial - function that returns the factorial of a given number
 *@n: Is the input
 *Return: 0 (Success)
 *Otherwise -1 - error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
