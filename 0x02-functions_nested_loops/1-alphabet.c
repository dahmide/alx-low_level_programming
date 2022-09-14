#include <stdio.h>

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
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return;
}
