#ifndef DOG_H
#define DOG_H
/**
* struct dog - new type struct for dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
* Description: Defining a new type struct for a dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
