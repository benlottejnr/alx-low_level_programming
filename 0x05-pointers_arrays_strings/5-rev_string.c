#include "main.h"

/**
 * rev_string - reverses a string
 * @s: text to be reversed
 *
 */
void rev_string(char *s)
{
	int i=0;
	int j;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
