#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: the string to print
 *
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	i = i /  2;
	for (j = 0 ; j < i ; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
