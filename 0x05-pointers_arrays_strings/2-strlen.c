#include "main.h"

/**
 * _strlen > function to get length of a string
 * @n:string pointer to passed to this function
 * Return: return length of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
