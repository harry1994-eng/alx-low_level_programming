#include <stdio.h>
#include "function_pointer.h"
/**
 * array_iterator - function that executes function given as psrs
 * @array:array of element
 * @size:size of array
 * @action: fuction pointer
 *
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(arrary[i]);
		}
	}
}
