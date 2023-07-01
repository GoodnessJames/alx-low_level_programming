# Project Title: 0x06. C - More Pointers, Arrays, and Strings

## Description of each C-function file in the tasks

### Task 0: 0-strcat.c

The function written in this file (0-strcat.c) concatenates two strings
- Prototype: char *_strcat(char *dest, char *src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

### Task 1: 1-strncat.c

The function written in this file (1-strncat.c) concatenates two strings
- Prototype: char *_strncat(char *dest, char *src, int n);
- The _strncat function is similar to the _strcat function, except that
it uses at most n bytes from src, and src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

### Task 2: 2-strncpy.c
The function written in this file (2-strncpy.c) copies a string
- Prototype: char *_strncpy(char *dest, char *src, int n);
- The function works exactly like strncpy

### Task 3: 3-strcmp.c
The function written in this task (3-strcmp.c) compares two strings (s1 and s2)
- Prototype: void _puts(char *str);

### Task 4:

The function prints a string, in reverse, followed by a new line.
- Prototype: void print_rev(char *s);

### Task 5: 

The function (rev_string) reverses a string.
- Prototype: void rev_string(char *s);

### Task 6:

The function (puts2) prints every other character of a string, starting with the first character, followed by a new line.
- Prototype: void puts2(char *str);

### Task 7:

The function (puts_half) prints half of a string, followed by a new line.

### Task 8: 

The function (print_array) prints n elements of an array of integers, followed by a new line.

## Conclusion

