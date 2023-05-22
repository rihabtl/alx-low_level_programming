#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Description: poppy
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
