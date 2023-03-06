#include "main.h"
/**
 * _memset - standard library function fills memory block.
 * @b :constant byte to fill
 * @s :memory area to fill
 * @n :bytes of memory area to fill
 * Return: memory area to be filed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
