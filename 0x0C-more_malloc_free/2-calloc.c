#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc-allocates memory of an array
 * @nmemb: number of members
 * @size:size of the elements
 * Return:pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
