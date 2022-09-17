#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: always 0 (Success)
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);
	_putchar('\n');
}
