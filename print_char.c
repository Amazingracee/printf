#include "main.h"
#include <stdio.h>
/**
 * print_char - writes the character c to stdout
 * @data: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_char(va_list data, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(data, int);
	mang_buf(buf, c, ibuf);

	return (1);
}
