#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
