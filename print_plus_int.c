#include "main.h"

/**
 * prinpint - print integer with plus symbol
 * @data: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */

int prinpint(va_list data, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_temp, i, div;

	int_input = va_arg(data, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = mang_buffer(buf, '-', ibuf);
	}
	else
	{
		int_in = int_input;
		ibuf = mang_buffer(buf, '+', ibuf);
	}
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = mang_buffer(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + 1);
}