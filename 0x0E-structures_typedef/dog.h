#ifndef _DOG_H_
#define _DOG_H_

int _putchar(char);
/**
 * struct dog - defines a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct *, char *, float, char *);
void print_dog(struct dog *);
void free_dog(dog_t *);
#endif
