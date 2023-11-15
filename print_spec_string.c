#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_special_string(va_list val)
{
	char *s;
	int i, len = 0;
	int mean;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			mean = s[i];
			if (mean < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_sup(mean);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
