#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "abcdefjhijklmnopqrstuvwxyz";
	while (i < 26)
	{
		putchar(str[i]);
		i = i + 1;
	}
}
