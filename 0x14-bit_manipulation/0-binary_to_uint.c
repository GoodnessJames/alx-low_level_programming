#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of characters - 0 and 1
 *
 * Return: On SUCCESS, returns (n) i.e. the converted number
 *         On FAILURE, returns (0) if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int n = 0, mult = 1;

	if (b == 0)
		return (0);

	len = 0;
	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (n);
}
