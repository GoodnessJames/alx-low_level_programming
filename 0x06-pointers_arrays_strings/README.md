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
The function written in this file (3-strcmp.c) compares two strings (s1 and s2)
- Prototype: int _strcmp(char *s1, char *s2);

### Task 4: 4-rev_array.c
The function written in this file (4-rev_array.c) reverses the content of an array of integers
- Prototype: void reverse_array(int *a, int n);

### Task 5: 5-string_toupper.c
The function written in this file (5-string_toupper.c) changes all lowercase letters of a string to uppercase
- Prototype: char *string_toupper(char *str);

### Task 6: 6-cap_string.c
The function written in this file (6-cap_string.c) capitalizes all words of a string
- Prototype: char *cap_string(char *str);

### Task 7: 7-leet.c
The function written in this file (7-leet.c) encodes a string into 1337
- Prototype: char *leet(char *str);

### Task 8: 100-rot13.c
The function written in this file encodes a string to rot13, without switch or ternary operations and using only one if and two loops.

### Task 9: 101-print_number.c
The function written in this file (101-print_number.c) prints an integer without using long, arrays, pointers, or hard-coded special values.
- Prototype: void print_number(int n);

### Task 10: 102-magic.c
The function in this file (102-magic.c) completes the [source code](https://github.com/alx-tools/make_magic_happen/blob/master/magic.c) and prints a[2] = 98 using pointer magic.
