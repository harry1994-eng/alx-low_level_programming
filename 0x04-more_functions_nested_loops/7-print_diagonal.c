#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on a terminal 
 * @n:input number of times '\' should br printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n > 0)
			{
				putchar('\n');
			}
	else
	{
		for (co = 1; co <= n; co++)
		{
		for (sp = 1; sp < co; sp++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
