#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		putchar(word);
	putchar('\n');
	return (0);
}
