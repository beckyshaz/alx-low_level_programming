#include "main.h"
/**
 * positive_or_negative - function that prints if integer is + or -
 *@i: character to be checked
 *Return: ALways 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

