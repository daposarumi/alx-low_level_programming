#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 *
 */
typedef struct dog dog_t;

/**
 * dog - new struct
 * @name: member
 * @age: member
 * @owner: member
 *
 * Description - my first struct
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
