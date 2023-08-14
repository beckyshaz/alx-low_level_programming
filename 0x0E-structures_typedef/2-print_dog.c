#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Function to print strct dog
 *struct dog - Data of type  struct dog
 *@d: Variable of type struct dog
 *Description: Function that prints a struct dog
 */

void print_dog(struct dog *d)
{
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
