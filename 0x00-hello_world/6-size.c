#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %i byte(s)", sizeof(a));
	printf("Size of an int: %i byte(s)", sizeof(b));
	printf("Size of a long int: %i byte(s)", sizeof(c));
	printf("Size of a long long int: %i byte(s)", sizeof(d));
	printf("Size of a float: %i byte(s)", sizeof(e));

}
