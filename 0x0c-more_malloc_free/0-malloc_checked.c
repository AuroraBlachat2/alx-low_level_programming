#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b:integer
 * Return:pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

