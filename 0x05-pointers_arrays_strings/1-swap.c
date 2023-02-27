#include "main.h"
/**
 * swap_int - swaps two integers
 * @a : integer
 * @b :integer
 * Return : Void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
