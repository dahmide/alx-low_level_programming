#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: null
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	putchar('\n');
}
