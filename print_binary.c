#include "main.h"

/**
 * print_binary - prints decimal in binary
 * @data: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_binary(va_list data, char *buf, unsigned int ibuf)
{
	int int_input, count, i, first_one, isnegative;
	char *binary;

	int_input = va_arg(data, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuf = mang_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuf = mang_buf(buf, binary[i], ibuf);
			count++;
		}
	}
	free(binary);
	return (count);
}
