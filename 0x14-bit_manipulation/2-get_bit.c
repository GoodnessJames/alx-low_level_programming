#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The bit
 * @index: The index to get the value at - index starts at 0
 *
 * Return: On SUCCESS, returns the value of bit at index - index
 *         On FAILURE, returns (-1) to signify an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
