#include "main.h"

/**
 * print_rot - writes the str in ROT13
 * @data: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_rot(va_list data, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(data, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = mang_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				ibuf = mang_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = mang_buf(buf, str[i], ibuf);
		}
	return (i);
}
