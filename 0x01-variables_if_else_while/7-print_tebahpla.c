#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "zyxwvutsrqponmlkjihgfedcba\n";

	while (i < 27)
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
