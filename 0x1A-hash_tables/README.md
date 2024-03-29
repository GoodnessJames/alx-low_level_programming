# C - Hash tables
The objective of this project is to implement a hash table data structure in C
programming language. Hash tables are fundamental data structures that are used to store
and retrieve key-value pairs efficiently. This project aims to demonstrate the understanding
of hash table concepts, collision resolution techniques, and memory management in C.

## Description of Project Task Files

* [tests](./tests): Folder of test files provided by ALX SE School.

### Header File

* [hash_tables.h](./hash_tables.h): Header file containing definitions and prototypes for
all typedefs and functions written for the project.

Data Structures:
```
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;
```

* [0-hash_table_create.c](./0-hash_table_create.c): C function that creates a `hash_table_t`
  hash table.
    * If the function fails - returns `NULL`.
    * Otherwise - returns a pointer to the new hash table.

* [1-djb2.c](./1-djb2.c): C function that implements the djb2 hashing algorithm.

* [2-key_index.c](./2-key_index.c): C function that returns the index at which a key/value
  pair should be stored in the array of a `hash_table_t` hash table.

* [3-hash_table_set.c](./3-hash_table_set.c): C function that adds an element to a
  `hash_table_t` table.
    * The parameter `key` cannot be an empty string.
    * Returns `1` on success, `0` otherwise.

* [4-hash_table_get.c](./4-hash_table_get.c): C function that retrieves a value associated
  with a key in a `hash_table_t` hash table.
    * If `key` cannot be matched - returns `NULL`.
    * Otherwise - returns the value associated with `key`.

* [5-hash_table_print.c](./5-hash_table_print.c): C function that prints a `hash_table_t`
  hash table.
    * Prints each `key`/`value` pair in the order they appear in the array of the hash table.
    * Does not print anything if the hash table is `NULL`.

* [6-hash_table_delete.c](./6-hasb_table_delete.c): C function that deletes a
  `hash_table_t` hash table.

* [100-sorted_hash_table.c](./100-sorted_hash_table.c): C functions that define a sorted
  hash table `shash_table_t`.
    * Identical in function to a `hash_table_t` hash table except key/value
    pairs are inserted in alphabetical order according to the ASCII value of the key.
    * Key/value pairs are printed in the order they are sorted.
    * Includes a function `shash_table_print_rev()` that prints the hash table
    in reverse order.
