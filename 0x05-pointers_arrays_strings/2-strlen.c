#include "main.h"

/**
 * _strlen > function to get length of a string
 * @n:string pointer to passed to this function
 * Return: return length as integer
 */
int _strlen(char *s)
{
	int len = 0;

       while (*(s + len) != '\0')
	       len++;

	return (len);
}
