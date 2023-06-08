#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to an unsigned long int
 * @index: The index to set the value at - index starts at 0
 *
 * Return: On SUCCESS, returns (1)
 *         On FAILURE, returns (-1) to signify an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
