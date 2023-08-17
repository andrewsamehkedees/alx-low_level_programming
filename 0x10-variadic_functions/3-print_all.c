#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				printed = 1;
				break;
		}
		if (format[i + 1] && printed)
			printf(", ");
		i++;
		printed = 0;
	}
	printf("\n");
	va_end(args);
}
