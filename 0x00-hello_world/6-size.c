#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int intType;
	int longIntType;
	int longlongintType;
    	float floatType;
   	char charType;

    	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    	printf("Size of an int: %zu bytes\n", sizeof(intType));
    	printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
    	printf("Size of a long long int: %zu bytes\n", sizeof(longlongIntType));
    	printf("Size of a float: %zu byte\n", sizeof(floatType));
	return (0);
}
