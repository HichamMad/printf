#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int j, y;
	int x = 1;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((x << (31 - j)) & num);
		if (p >> (31 - j))
			flag = 1;
		if (flag)
		{
			y = p >> (31 - j);
			_putchar(y + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
