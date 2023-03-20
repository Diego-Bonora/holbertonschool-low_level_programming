#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialices the structure dog
 * @d: structure name
 * @name: name for the dog
 * @age: age for the dog
 * @owner: owner for the dog
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
