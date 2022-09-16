#include <stdio.h>

/**
 * prints all alphabets except q and e
 *
 * Return: Always (0) Success
 */

int main(int c)
{
	int c;
	
	for (c = 97; c <= 122; c++)
	{
		if ((c != 101) || (c != 113))
			_putchar(c);
		else 
			continue;
	}
	_putchar("\n");
	
	return (0);
}
