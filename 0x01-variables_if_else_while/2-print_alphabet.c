#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alphabets[] = "abcdefjhijklmnopqrstuvwxyz\n";
	while (i < 26)
	{
		putchar(alphabets[i]);
		i++;
	}
}
