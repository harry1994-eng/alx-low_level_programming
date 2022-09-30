#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program 
 * @argc:count argument 
 * @argv:arguments
 *
 * Return:Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	argc--;
	printf("%d\n", argc);
	return (0);
}
