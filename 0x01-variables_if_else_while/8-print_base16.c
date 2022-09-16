#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;
	char cn;

	for (n = 0; n <= 9; n++)
	putchar((n % 10) + '0');
	for (cn = 'a'; cn <= 'f'; cn++)
	putchar(cn);
	putchar('\n');
	return (0);
}
