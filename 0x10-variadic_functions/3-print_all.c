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
	char *separator = ", ";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", "", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%s%d", "", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%s%f", "", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", "", str);
				printed = 1;
				break;
		}
		if (format[i + 1] && printed)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
