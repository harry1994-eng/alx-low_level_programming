#include "main.h"

/**
 *  _memcpy -> memory copy
 *@dest:is destination memory
 *@src: is source memory
 *@n: number of bytes to be copied
 *Return: string copied from source
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] =  src[index];

	return (dest);
}
