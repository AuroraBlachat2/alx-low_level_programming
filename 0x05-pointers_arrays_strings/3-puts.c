#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string to be printed
 * Return : printed string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
