#include "dog.h"

/**
 * init_dog - function the initialzed structure type dog
 * @d: pointer to struct
 * @name: pointer to name dogs
 * @age: age of the dog
 * @owner: pointer to owner of dog
 *
 * Return: void valu
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
