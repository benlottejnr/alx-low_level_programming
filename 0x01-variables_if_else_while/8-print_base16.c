#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;
	char ch;
	for (n = 0; n <= 16; n++)
	{
		ch = ("%x" n);
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
