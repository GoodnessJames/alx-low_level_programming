#include "main.h"

/**
* print_times_table - Prints the 9 times table, starting with 0
* @n: The comparison integer
*
* Return: void
*/
void print_times_table(int n)
{
	int num, num_times, product;

	while (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (num_times = 1; num_times <= n; num_times++)
			{
				_putchar(',');
				_putchar(' ');

			product = num  * num_times;

			if (product <= 99)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}

}
