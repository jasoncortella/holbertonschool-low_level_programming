# 0x0D. C - Structures, typedef
## This directory contains answer files to project 0x0D

### 0. Django
* dog.h
* Defines struct dog with some given elements

### 1. A dog is the only thing on earth that loves you more than you love yourself
* 1-init_dog.c
* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
* a function that initialize a variable of type struct dog

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
* 2-print_dog.c
* a function that prints a struct dog
Prototype: void print_dog(struct dog *d);

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
* dog.h
* Define a new type dog_t as a new name for the type struct dog.

### 4. A door is what a dog is perpetually on the wrong side of
* 4-new_dog.c
* Prototype: dog_t *new_dog(char *name, float age, char *owner);
* a function that creates a new dog.

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
* 5-free_dog.c
* Prototype: void free_dog(dog_t *d);
* a function that frees dogs