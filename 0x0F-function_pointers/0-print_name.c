#include "function_pointer.h"
#include <stdlib.h>
/**
 * prinit_name - prinits a name
 * @name pointer to name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || !f)
		return;
		f(name);
}
