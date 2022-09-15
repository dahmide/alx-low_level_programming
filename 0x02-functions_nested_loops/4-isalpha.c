#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 * @c: Character params
 *
 * Description: Check for alphabetic character
 * Return: 0 for non-alphabetic character else 1
 */

int _isalpha(int c)
{
	int x = isalpha(c);

	if (x > 0)
		return (1);
	else
		return (0);
}
