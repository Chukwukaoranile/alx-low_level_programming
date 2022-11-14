#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Define a new type struct dog with the following elements.
 * @name: variable 1
 * @age: variable 2
 * @owner: Parameter
 *
 * Return: successful
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

