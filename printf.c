#include "main.h"
/**
 * _printf - function that selects the correct function to print.
 * @format: identifier to match
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_spec p[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%i", printf_int}, {"%d", printf_dec},
		{"%b", printf_bin}, {"%u", printf_unsigned}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX}, {"%S", printf_exclusive_string}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (p[j].t[0] == format[i] && p[j].t[1] == format[i + 1])
			{
				length += p[j].f(args);
				i += 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
