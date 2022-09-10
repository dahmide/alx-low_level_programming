#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (int k = 0; k < 99; k++)
		if ((k % 10) == 0)
			j++;
		if ((k % 10) <= j)
			continue;
		if (k < 10)
			putchar('0');
		putchar((k % 10) + '0');
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
