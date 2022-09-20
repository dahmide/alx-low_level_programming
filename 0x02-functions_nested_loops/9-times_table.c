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

	while (i <= 9)
	{
		int k = 0;

		while (k <= 9)
		{

			int j = i * k;

			if (j < 10)
			{
				_putchar(j);
			} else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}

			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			k++;
		}
		i++;
	}
}
