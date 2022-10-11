#ifndef _DOG_H_
#define _DOG_H_

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
#endif /* _DOG_H_ */
