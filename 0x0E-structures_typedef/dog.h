#ifndef DOG_H
#define DOG_H
/**
 *struct dog- information about a dog
 *@name :first parameter name of dog
 *@age  :second parameter age of dog
 *@owner :third parameter owner of the dog
 *Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 *init_dog - initialises stuct dog
 *@d :pointer to struct dog 
 */ 	
void print_dog(struct dog *d);
/**
 *print_dog - prints struct dog
 *@d : pointer to struct dog
 */	
dog_t *new_dog(char *name, float age, char *owner);
/**
 *dog_t - typedef to struct dog
 *
 */	
void free_dog(dog_t *d);
/**
 *free_dog - frees memory assigned to struct dog
 *
 */	
#endif
