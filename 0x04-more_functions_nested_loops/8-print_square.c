#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size:size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int co, ro;

       if (size > 0)
	{
		for (co = 0; co < size; co++)
		{
			for (ro = 0; ro < (size - 1); ro++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
       else
       {
	       putchar('\n');
       }
}
