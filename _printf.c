#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list arguments;
	char *p, *sval;
	int ival;

	va_start(arguments, format);
	int num = 0;
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			num++;
			continue;
		}
		switch (*++p)
		{
		case 's':
		for (sval = va_arg(arguments, char *); *sval; sval++)
		{
		putchar(*sval);
		num++;
		}
		break;

		case 'c':
		ival = va_arg(arguments, int);
		printf("%c", c);
		num++;
		break;
		
		default:
		putchar(*p);
		num++;
		break;
		}
	}
va_end(arguments);

return (num);
}
