#include "main.h"

/**
 * print_alphabet_x10 - print ahabets 10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			ch++:
		}
		alphabet_count++;
		_putchar('\n');
	}
}
