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

	while (i < 100)
	{
		if ((i % 10) == 0)
		{
			j++;
		}
		if ((i % 10) >= j)
		{
			if (i < 10)
			{
				putchar('0');
			}
			putchar((i % (j * 10)) + '0');
			if (i == 89)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
