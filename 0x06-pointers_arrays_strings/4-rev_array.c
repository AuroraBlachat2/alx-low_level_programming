#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements to swap
 * Return : nothing
 */
void reverse_array(int *a, int n)
{
	int test, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		test = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = test;
	}
}
