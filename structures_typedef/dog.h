#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a dog structure
 * @name: name for the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: creates a dog structure with name, age and owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
