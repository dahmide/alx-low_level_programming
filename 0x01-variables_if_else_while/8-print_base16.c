#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "0123456789abcdef\n";

	while (i < 17)
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
