#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name:sdfsd
 * @age:sdfsdf
 * @owner:sdfsdf
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
