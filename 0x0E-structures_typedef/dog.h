#ifndef HOLBERTON_H
#define HOLBERTON_H


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


/**
 * struct dog - ..
 * @name: ..
 * @age: ..
 * @owner: ..
 * Description: ..
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* HOLBERTON_H */
