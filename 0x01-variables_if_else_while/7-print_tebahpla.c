#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 27;
	char str[] = "n\abcdefghijklmnopqrstuvwxyz";

	while (i > 0)
	{
		putchar(str[i]);
		i = i - 1;
	}
	return (0);
}
