#include <stdio.h>
#include "main.h"
/**
 * print array - prints n element of array
 * @a: array
 * @n:number of values
 * Return:a and n inputs
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(",");
	}
	printf("\n");
}
