#include <stdio.h>
/**
  * main - Prints all numbers of base 16
  *
  * Return: Always (Success)
  */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'f'; d++)
	{
	putchar(d);
	}

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	}

	putchar('\n');

return (0);
}

