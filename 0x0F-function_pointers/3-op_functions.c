#include "3-calc.h"
/**
 *op_add - returns the sum of a and b
 *@a: First number to be entered
 *@b: Second number to be entered
 *Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - returns the difference of a and b
 *Return: a minus b
 *@a: First number
 *@b: Second number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - returns the product of a and b
 *Return: a multiplied by b
 *@a: first number
 *@b: second number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - returns the result of the division of a by b
 *Return: a divided by b
 *@a: first number to be input
 *@b: second number to be input
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - returns the remainder of the division of a by b
 *Return: a modulo b
 *@a: first number to be input
 *@b: second number to be input
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

