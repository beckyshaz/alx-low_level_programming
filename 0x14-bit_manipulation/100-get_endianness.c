#include "main.h"
/**
 *get_endianness -  function that checks if a machine is small
 *Return: 1 if big else 0 if small
 */
int get_endianness(void)
{
	unsigned int index = 1;
	char *car = (char *) &index;

	return (*car);
}
