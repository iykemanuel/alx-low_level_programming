#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0
 * this program prints in uppercase, and then lowercase
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch)
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch)
}
putchar('\n');
return (0);
}
