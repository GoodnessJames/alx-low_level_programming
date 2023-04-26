#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0
*
* Return: void
*/
void times_table(void)
{
	int n, num_times, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (num_times = 1; num_times <= 9; num_times++)
		{
			_putchar(',');
			_putchar(' ');

			product = n  * num_times;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}

}
