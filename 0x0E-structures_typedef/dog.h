#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct
 * @name: str
 * @age: flo
 * @owner: str
 * Description: Longer description
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
int _strlen(char *s);
char *_strcpy(char *d, char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
