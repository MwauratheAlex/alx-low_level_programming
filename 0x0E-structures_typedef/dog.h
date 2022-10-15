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

/**
 * dog_t - a new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
