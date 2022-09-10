#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "abcdfghijklmnoprstuvwxyz\n";

	while (i < 25)
	{
		putchar(str[i]);
		i = i + 1;
	}
	return (0);
}
