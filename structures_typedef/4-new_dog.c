#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - sdfsdf
 * @name:sdfsd
 * @age:dfsd
 * @owner:dsfsdf
 * Return:sfsdf
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner =owner;

	return (my_dog);
}
