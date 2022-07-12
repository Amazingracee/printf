#include "main.h"

/**
 * print_string - writes the string to stdout
 * @data: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */

int print_string(va_list data, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";
	str = va_arg(data, char *);

	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = mang_buffer(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = mang_buffer(buf, str[i], ibuf);

	return (i);
}
