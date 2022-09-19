#include "main.h"
/**
 * _put -> this is a function that put a string
 * @: a parameter to put function
 */
void _put(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
