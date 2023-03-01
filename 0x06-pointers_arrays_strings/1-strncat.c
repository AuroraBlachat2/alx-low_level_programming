#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, j = 0;

	while (dest[d])
	{
		d++;
	}

	while (j < n && src[j])
	{
		dest[d] = src[j];
		d++;
		j++;
	}

	dest[d + n + 1] = '\0';

	return (dest);
}
