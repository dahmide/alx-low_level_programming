#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - Entry point
 * 
 * Description: Print every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: null
 */

void jack_bauer(void)
{

	for(int i = 0; i < 1440; i++)
	{
		int min = i % 60;
		int hrs = (i / 60) % 24;

		if (min < 10)
		{
			write(1, '0', 1);
			write(1, &min, 1);
		} else
		{
			write(1, &min, 2);
		}
		write (1, ':', 1);
		if (hrs < 10)
		{
			write(1, '0', 1);
			write(1, &hrs, 1);
		} else
		{
			write(1, &hrs, 2);
		}
		write(1, '\n', 2);

	}

	return ();
}
