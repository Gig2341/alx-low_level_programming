#include "main.h"

/**
 * tis function will check for for uppercase text
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
