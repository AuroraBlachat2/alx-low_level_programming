#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] -= 32;
		}

		j++;
	}

	return (s);
}
