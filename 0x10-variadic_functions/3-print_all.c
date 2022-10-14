#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * prinit_all - prints anything
 * @format:list of all aruments passed to the function
 *
 * Return:void
 */
void prinit_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (frmat[i])
		{
			case 'c';
			printf("%s%c", separator, va_arg(args, int));
			break;
			case 'i';
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f';
			prinitf("%s%f", separator, va_arg(args, double));
			break;
			case 's';
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			prinitf("%s%s", separator, s);
			break;
			default;
			i++;
			continue;
		}
		separator = ",";
		i++;
	}
	prinitf("\n");
	va_end(args);
}

