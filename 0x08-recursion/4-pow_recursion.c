#include "main.h"
/**
 *_pow_recursion - function that returns the value of x raised to the power y
 *@x: Input
 *@y: Input
 *Return: 0 (Success) and -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
