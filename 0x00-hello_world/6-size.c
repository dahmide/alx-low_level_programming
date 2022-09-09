#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	float f;
	printf("Size of a char: %c byte(s).\n", (char)sizeof(c));
	printf("Size of an int: %i byte(s).\n", (int)sizeof(i));
	printf("Size of a long int: %li byte(s).\n", (long int)sizeof(i));
	printf("Size of a long long int: %lli byte(s).\n", (long long int)sizeof(i));
	printf("Size of a float: %f byte(s).\n", (float)sizeof(f));
	return (0);
}
