#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Return: Always 0
 * this program prints the alphabets in lowercase with an exception of q and e
 */
int main(void)
{
	char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
