#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int aninteger;
	char acharacter;
	float afloat;
	long along;
	long long alonglong;
	double adouble;

	printf("Size of an int: %lu byte(s)\n", sizeof(aninteger));
	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	printf("Size of a long: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a double: %lu bytes(s)\n", sizeof(adouble));
	
	return (0);
}
