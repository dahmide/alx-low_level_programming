#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * @c:  Character params
 *
 * Description: Check for lowercase character
 * Return: 0 for non-lowercase character else 1
 */

int _islower(int c)
{
	int x = islower(c);

	if (x > 0)
		return (1);
	else
		return (0);
}
