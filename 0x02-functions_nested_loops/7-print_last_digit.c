#include "main.h"

/**
 * print_last_digit - Entry point
 * @ld: last digit
 *
 * Return: the last digit returned
*/

int print_last_digit(int ld)
{
	if (ld > 0)
	{
		ld = ld % 10;
		_putchar(ld + '0');
	}
	else
	{
		ld = ld % 10 * -1;
		_putchar(ld + '0');
	}
	return (ld);
}
