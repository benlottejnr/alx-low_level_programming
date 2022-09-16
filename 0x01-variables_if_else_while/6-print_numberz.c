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
	char cn;

	for (n = 0; n <= 9; n++)
	{
		cn = n + '0';
		putchar(cn);
	}
	putchar('\n');
	return (0);
}
