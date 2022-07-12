#include "main.h"

/**
 * _toprint - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */

int _toprint(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
