# Project: 0x0E. C - Structures, typedef

This project is centered on the following points:
- Structures
- Structure documentation
- Typdef

## Task 0

The file (dog.h) in this task define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *

## Task 1

In this file (1-init_dog.c), a function is written that initializes a variable of type struct dog
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

## Task 2

In this file (2-print_dog.c), a function is written that prints a struct dog
- Prototype: void print_dog(struct dog *d);
- The standard library was used
- If an element of d is NULL, (nil) is printed instead of the element ( ie if name is NULL, Name: (nil) is printed)
- If d is NULL nothing is printed.

## Task 3

A new type dog_t as a new name for the type struct dog is defined in the header file (dog.h)

## Task 4

In this file (4-new_dog.c), a function is written that creates a new dog.
- Prototype: dog_t *new_dog(char *name, float age, char *owner);
- A copy of name and owner is stored
- The return is NULL if the function fails

## Task 5

In this file (5-free_dog.c), a function is written that frees dogs.
- Prototype: void free_dog(dog_t *d);
