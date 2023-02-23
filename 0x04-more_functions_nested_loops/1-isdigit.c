#include "main.h"
/**
 * _isdigit - checks whether it is a digit or not
 * @c: to be checked whether it is a digit or not
 *
 * Return: 1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
