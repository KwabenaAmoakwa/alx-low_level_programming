#ifndef DOG
#define DOG

/**
 * struct dog - structure name
 * @name: member
 * @age: member
 * @owner: member
 *
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

#endif
