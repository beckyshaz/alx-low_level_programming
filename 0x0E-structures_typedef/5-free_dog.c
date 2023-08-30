#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - function that frees memory allocated for a stuct dog
 *@d: struct dog to be freed
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
