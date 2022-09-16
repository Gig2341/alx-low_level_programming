#include "main.h"

/**
 * main: checks whether c is a digit
 *
 * Returns 1 if c is a digit
 *
 * Returns 0 otherwise
 */

int _isupper (int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
