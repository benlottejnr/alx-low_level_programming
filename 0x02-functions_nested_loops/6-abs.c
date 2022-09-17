#include "main.h"

/**
 * _abs - Entry point
 * @ab: number to check
 *
 * Return: absolute number of an integer
*/

int _abs(int ab)
{
	if (ab < 0)
		ab = ab * -1;
	return (ab);
}
