#include "main.h"
#include <stdio.h>

/**
 * print_ncs0 - writes the character - to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */

int print_ncs0(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	mang_buf(buf, '0', i);
		return (1);
}
