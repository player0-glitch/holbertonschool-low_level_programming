#ifndef DOG_H
#define DOG_H
struct dog
{
	float age;
	const char *owner;
	const char *name;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
