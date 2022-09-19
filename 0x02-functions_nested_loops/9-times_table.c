#include "main.h"

/**
 * void times_table(void) - Entry point
 *
 * Description: Print the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int k = 0;

	while (i <= 9)
	{
		while (k <= 9)
		{

			int j = i * k;
			_putchar(j);
			_putchar(',');
			_putchar(' ');

			k++;
		}

		i++;
	}
}
