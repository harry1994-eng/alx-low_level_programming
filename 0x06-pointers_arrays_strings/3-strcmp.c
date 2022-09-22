#include "main.h"

/**
 *  _strcmp - function which compare two strings and
 *  @s1: first string
 *  @s2: second string
 *  Return:0 if equals or b if is different
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
			i++;

	}
	return (b);
}
