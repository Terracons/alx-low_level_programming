#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - this program
 * initailize new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: buffer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buffer;

	buffer = malloc(sizeof(dog_t));
	if (!buffer)
		return (NULL);

	buffer->name = name;
	buffer->age = age;
	buffer->owner = owner;

	return (buffer);
}
