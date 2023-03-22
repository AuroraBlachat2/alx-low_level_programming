#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array:input array
 * @size:size of the array
 * @action:pointer to function
 * Return:Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size <= 0 || array == NULL || action == NULL)
	{
		return;
	}
	action(*array);
	array_iterator(array + 1, size - 1, action);
}
