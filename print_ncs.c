#include "main.h"
#include <stdio.h>

/**
 * print_ncs - writes the character - to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */

int print_ncs(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	mang_buf(buf, '-', i);
		return (1);
}
