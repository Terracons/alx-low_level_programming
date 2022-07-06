#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is about dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description - this is a struct
 * about dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
