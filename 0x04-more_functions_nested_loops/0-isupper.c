#include "main.h"

/**
 * this function will check for uppercase text
 *
 * Returns 1 if c is uppercase
 *
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
