#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates an array
 * @min:minimum
 * @max:maximum
 * Return:Nothing
 */
int *array_range(int min, int max)
{
	int *b, i = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[i] = min;
		i++;
		min++;
	}

	return (b);
}
