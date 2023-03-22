#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size:size of the array
 * @array:the array
 * @cmp:pointer to fuctio to compare variables
 * Return:Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
