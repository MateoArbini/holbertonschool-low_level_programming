#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure of dog, which contains name, age and owner
 *@name: var type char named "name"
 *@age: var type float named "age"
 *@owner: var type char named "owner"
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - typedef of struct dog, named dog_t whith the same variables
 **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
