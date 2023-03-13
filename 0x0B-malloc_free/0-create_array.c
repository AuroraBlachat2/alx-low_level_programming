#include"main.h"
#include <stdlib.h>
/**
 * create_array - creates an arry
 * @size:size of array
 * @c:Char for the array
 * Return:Null if array is zer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
