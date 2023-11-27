#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - function that returns length of a string
 *@str: string to find its length
 *Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - copies string pointed to by src to the buffer pointed to by dest
 *@dest: pointer to where the string is copied
 *@src: pointer to where the string is copied from
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (src[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *new_dog - Function that creates a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dg
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len, len2;

	len = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
