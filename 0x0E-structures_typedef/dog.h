#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creating new struct
 * @name: name of dog.
 * @owner: owner of dog.
 * @age: age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
