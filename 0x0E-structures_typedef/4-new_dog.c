#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_len - find the lenth of a string
 *
 * @s: string
 *
 * Return: length of s
 */
int str_len(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: dog, NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	len1 = str_len(name);
	len2 = str_len(owner);

	dog->name = malloc((len1 + 1) * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((len2 + 1) * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
