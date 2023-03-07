#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s:the string
 * @accept:set of bytes
 * Return : pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

	while (accept[b])
	{
		if (s[a] == accept[b])
		{
			s += a;
			return (s);
		}
		b++;

	}
	a++;
	}
	return ('\0');
}

