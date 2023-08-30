#include "main.h"
int support_prime(int n, int i);

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
		return (support_prime(n, n - 1));
	}
}
/**
 *support_prime - recursively checks if a number is prime or not
 *@n: number to be checked
 *@i: index of number
 *Return: 1 if prime else 0
 */
int support_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (support_prime(n, i - 1));
}









