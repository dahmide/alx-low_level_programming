#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 * @n: Int params
 *
 * Description: Print the last digit of a number
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int x = n * 1;
	char y[2];

	x = abs(x);
	x = x % 10;

	y = x + x;
	return (y);
}
