#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This struct represents a dog with its name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of the struct dog.
 */
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);


#endif /* DOG_H */
