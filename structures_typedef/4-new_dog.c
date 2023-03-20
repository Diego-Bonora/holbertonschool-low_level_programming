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
	if (!newdog)
	{
		return (NULL);
	}
	if (!name || !age || !owner)
	{
		return (NULL);
	}

	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->owner, owner);
	return (newdog);
}
