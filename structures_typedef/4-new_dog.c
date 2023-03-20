#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -
 * Return:
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = NULL;
	newdog = malloc(sizeof(dog_t));

	if (!name || !age || !owner)
	{
		return (NULL);
	}

	newdog->name = malloc(sizeof(char) * strlen(name));
	newdog->name = name;
	newdog->age = age;
	newdog->owner = malloc(sizeof(char) * strlen(owner));
	newdog->owner = owner;
	return (newdog);
}
