#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Return: Lowercase character
 */

int _islower(int c)
{
	int x = islower(c);

	if(c == x)
		return (1);
	else
		return (0);
}
