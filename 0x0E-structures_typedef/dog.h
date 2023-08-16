#ifndef DOG_H
#define DOG_H
/**
* struct dog - Represents a dog, its name and owner
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
#include <stddef.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
