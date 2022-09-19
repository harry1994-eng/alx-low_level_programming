#include <stdio.h>
#include "main.h"
/**
 *_put - prints a string
 *@str: string to print
 *
 * description: print a string
 * on success:returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
