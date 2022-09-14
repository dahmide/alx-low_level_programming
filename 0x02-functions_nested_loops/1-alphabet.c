#include <stdio.h>
#include "_putchar.c"

/**
 * main - Print all alphabet in lowercase
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

	_putchar('\n');
	return;
}
