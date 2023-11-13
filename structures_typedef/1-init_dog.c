#include "dog.h"
/**
 * init_dog - sdfsdf
 * @d:sdfs
 * @name:sdfsd
 * @age:sdfsd
 * @owner:sdfsdf
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
