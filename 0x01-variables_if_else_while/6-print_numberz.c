#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar(char(n));
	putchar('\n');
	return (0);
}