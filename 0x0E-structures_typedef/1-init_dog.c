#include"main.h"
#include"dog.h"
#include<stdlib.h>
/**
 *init_dog - function to initialize struct
 *@d: struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct));
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
