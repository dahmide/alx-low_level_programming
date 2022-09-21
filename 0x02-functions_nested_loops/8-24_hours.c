#include "main.h"
#include <math.h>

/**
 * jack_bauer - Entry point
 *
 * Description: Print every minute of the day of Jack Bauer
 * Return: null
 */

void jack_bauer(void)
{

	int i = 0;

	while (i < 1440)
	{
		int min = floor(i);
		int hrs = floor(i / 60);

		if (min < 10)
		{
			_putchar('0');
			_putchar(min);
		} else
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
		}

		_putchar(':');

		if (hrs < 10)
		{
			_putchar('0');
			_putchar(hrs);
		} else
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
