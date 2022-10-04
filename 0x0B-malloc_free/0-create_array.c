#include "main.h"
#include <stdio.h>


/**
 * *malloc_checkd - allocate memory with malloc
 * @b:unsigned int type
 * Return:null if fails or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i]; = c;
	}
	return (arr);
}

