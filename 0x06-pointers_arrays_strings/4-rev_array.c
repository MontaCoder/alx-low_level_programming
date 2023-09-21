#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty.
 */
void reverse_array(int *a, int n)
{
	int *d, i, aux, c;

	d = a;

	for (i = 1; i < n; i++)
	{
		d++;
	}

	for (c = 0; c < i / 2; c++)
	{
		aux = a[c];
		a[c] = *d;
		*d = aux;
		d--;
	}
}
