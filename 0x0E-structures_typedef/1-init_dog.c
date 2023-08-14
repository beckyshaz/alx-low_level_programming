#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Name of function that initializes a struct dog
 *struct dog - Variable of type struct dog
 *@d: Name of data type struct dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *Description: Initialising a variable struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
