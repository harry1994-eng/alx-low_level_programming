#include "main.h"

/**
 * malloc_checked -string for prints a string
 * @b:number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exist(98);
	}
	return (p);
}
