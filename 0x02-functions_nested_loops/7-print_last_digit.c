#include "main.h"

/**
 * main - entry poin
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}
