#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void puts2(char *str)
{

		int count = 0, i, j;

			char *str, temp;



				while (count >= 0)

						{

									if (s[count] == '\0')

													break;

											count++;

												}

					str = s;



						for (i = 0; i < (count - 1); i++)

								{

											for (j = i + 1; j > 0; j--)

														{

																		temp = *(str + j);

																					*(str + j) = *(str + (j - 1));

																								*(str + (j - 1)) = temp;

																										}

												}

}
