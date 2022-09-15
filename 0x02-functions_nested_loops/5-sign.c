#include "main.h"

/**
 * print_sign - Entry point
 * @c: Int params
 *
 * Description: Print the sign of a number
 * Return: Print 1 for number greater than 0, 0 for number equals zero and -1 for number less than 0
 */

int print_sign(int n)
{
	if (n < 0)
		_putchar('-');
		return (-1);
	else if (n == 0)
		_putchar('0');
		return (0);
	else
		_putchar('+');
		return (1);
}
