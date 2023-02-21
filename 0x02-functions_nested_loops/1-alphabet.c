#include <main.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();

	char d;

	for (d = 'a', d <= 'z', d++)
	{
		_putchar(d);
	}

	_putchar('\n');

	return (0);
}
