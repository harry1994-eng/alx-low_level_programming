#include "main.h"
#include <string.h>
/**
 * print_rev -> printing a string in reverse 
 * @s: the string to be printed in rev
 * Return:string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}
	for (n = (fcounter - 1); n >= 0; n--)	
	{
		putchar(s[n]);
	}
	_putchar('\n');
}
