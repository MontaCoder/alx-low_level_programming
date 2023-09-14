#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int i = 1, c;

	while (i <= n)
	{
		for (c = 0; c <= i; c++)
	{
		_putchar(' ');
	}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
