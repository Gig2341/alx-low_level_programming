#include <stdio.h>

/**
 * a program that prints the name of the file it was compiled from,
 *  followed by a new line.
 *
 *  main: return (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
