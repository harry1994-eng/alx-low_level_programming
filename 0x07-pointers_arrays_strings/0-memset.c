#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s:pointer to the memory area
 * @n:bytes of memory
 * @b:constant byte
 *
 * Return:the memory area of s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory - s, value - c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
