#ifndef DOG_H
#define DOG_H
/**
 *struct dog - information about a dog
 *@name :first parameter name of dog
 *@age  :second parameter age of dog
 *@owner :third parameter owner of the dog
 *Description: Header file containing a data type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
