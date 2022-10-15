#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 *
 * @name: name of the dog
 *
 * @age: age of dog
 *
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
