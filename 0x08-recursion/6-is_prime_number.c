#include "main.h"

/**
 *support_prime - function that supports is_prime_number
 *@number: Input
 *@i: divisor number
 *Return: 1 (true)
 *Otherwise 0
 */
int support_prime(int number, int i)
{
	if (number % i == 0)
	{
		return (0);
	}
	else if (number == 2)
	{
		return (1);
	}
	else
	{
		return (support_prime(number, i + 1));
	}
}

/**
 *is_prime_number - function that checks for prime number
 *@n: Number to be checked
 *Return: 0 (False)
 *Otherwise 1 (True)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (support_prime(n, 0));
	}
}









