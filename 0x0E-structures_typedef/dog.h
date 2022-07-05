#ifndef DOG_H
#define DOG_H

/**
 * struct dog- this is a structure defining basic details about a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t- typedef ft struct dog
 */
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
#endif
