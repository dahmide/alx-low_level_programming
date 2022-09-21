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

		min = min % 60;
		hrs = hrs % 24;

		_putchar(min);
		_putchar(':');
		_putchar(hrs);
		_putchar('\n');
		i++;
	}
}
