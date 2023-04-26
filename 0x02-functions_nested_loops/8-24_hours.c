#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer
*
* Return: void
*/
void jack_bauer(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 23; n1++)
	{
		for (n2 = 0; n2 <= 59; n2++)
		{
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar(':');
			_putchar((n2 / 10) + '0');
			_putchar((n2 % 10) + '0');
			_putchar('\n');
		}
	}

}
