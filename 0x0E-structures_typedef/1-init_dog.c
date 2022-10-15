#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - nitialize a variable of type struct dog
 *
 * @d: dog struct
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
