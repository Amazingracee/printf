#include "main.h"

/**
 * mang_buf - handle and concatenate the buffer characters
 * @buf: buffer pointer
 * @c: character to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int mang_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		_toprint(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
