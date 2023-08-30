#include "lists.h"
#include <stdio.h>
void myPrintFirst(void)__attribute__ ((constructor));
/**
 *myPrintFirst - function that ix executed before the main function
 *Return: void
 */
void myPrintFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
