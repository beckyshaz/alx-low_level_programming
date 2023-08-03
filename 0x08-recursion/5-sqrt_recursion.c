#include "main.h"

/**
 *support_function - function that supports _sqrt_recursion function
 *@number: Input
 *@root: square root of number
 *Return: 0 (success)
 *Otherwise -1
 */
int support_function(int number, int root)
{
	if (root * root > number)
	{
		return (-1);
	}
	else if (root * root == number)
	{
		return (root);
	}
	else
	{
		return (support_function(number, root + 1));
	}
}

/**
 * _sqrt_recursion - function that returns natural square root of number
 *@n: Number to be input
 *Return: 0 (success)
 *Otherwise returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (support_function(n, 0));
	}
}

