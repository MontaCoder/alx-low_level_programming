#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar(toupper(c));
	}

	putchar('\n');

	return (0);
}
