#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - prints a struct dog
* @d: pointer
* Return: always void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nill)");
		printf("Age: %f\n", (d->age));
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nill)");
	}
}
