#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int 1
 * @b: int 2
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
