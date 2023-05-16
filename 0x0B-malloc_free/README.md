# Project: 0x0B-malloc_free

## Description of each c-function file in the tasks

## Task 0 File: 0-create_array.c

The function in this file creates an array of chars, and initializes it with a specific char.
- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

## Task 1 File: 1-strdup.c

The function in this file returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

## Task 2 File: 2-str_concat.c

The function in this file concatenates two strings.
- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- If NULL is passed, it is treated as an empty string
- The function returns NULL on failure

## Task 3 File: 3-alloc_grid.c

The function in this file returns a pointer to a 2 dimensional array of integers.
- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid is initialized to 0
- The function returns NULL on failure
- If width or height is 0 or negative, the return is NULL

## Task 4 File: 4-free_grid.c

The function in this file frees a 2 dimensional grid previously created by your alloc_grid function.
- Prototype: void free_grid(int **grid, int height);
- The alloc_grid.c file compiles successfully

## Task 5 File: 100-argstostr.c

The function in this file concatenates all the arguments of your program.
- Prototype: char *argstostr(int ac, char **av);
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument is followed by a \n in the new string

## Task 6 File: 101-strtow.c

The function in this file splits a string into words.
- Prototype: char **strtow(char *str);
- The function returns a pointer to an array of strings (words)
- Each element of the array contains a single word, null-terminated
- The last element of the returned array is NULL
- Words are separated by spaces
- Returns NULL if str == NULL or str == ""
- If the function fails, it returns NULL
