#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - sdfsdf
 * @name:sdfsd
 * @age:dfsd
 * @owner:dsfsdf
 * Return:sfsdf
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));
	char *my_name = malloc(strlen(name) + 1);
	char *my_owner = malloc(strlen(owner) + 1);

	if (my_dog == NULL || my_name == NULL || my_owner == NULL)
	{
		free(my_dog);
		free(my_name);
		free(my_owner);
		return (NULL);
	}
	strcpy(my_name, name);
	strcpy(my_owner, owner);
	my_dog->name = my_name;
	my_dog->age = age;
	my_dog->owner = my_owner;

	return (my_dog);
}
