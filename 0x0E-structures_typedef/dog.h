#ifndef doggy
#define doggy
/**
 * struct dog - information about dog
 * @name: name of the dog
 * @age: age of a dog
 * @owner: owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
