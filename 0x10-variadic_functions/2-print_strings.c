#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator:string to be printed between strings
 * @n:integer
 * Return:string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *S;
	va_list ap;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		S = va_arg(ap, char *);
		(S) ? printf("%s", S) : printf("(nil)");
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
