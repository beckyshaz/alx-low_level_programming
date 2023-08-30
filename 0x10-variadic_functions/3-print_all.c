#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - prints everything
 *@format: list of arguments
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sp = "";
	va_list lists;

	va_start(lists, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(lists, int));
							break;
							case'i':
							printf("%s%d", sp, va_arg(lists, int));
							break;
							case'f':
							printf("%s%f", sp, va_arg(lists, double));
							break;
							case's':

							st = va_arg(lists, char*);

								if (!st)
								st = "(nil)";

							printf("%s%s", sp, st);

							break;

						default:
							i++;
							continue;
			}
			sp = ",";
			i++;
		}
	}
	printf("\n");
	va_end(lists);
}
