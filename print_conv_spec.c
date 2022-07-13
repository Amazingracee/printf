#include "main.h"

/**
 * print_conv_spec - returns the amount of iterted specifiers.
 * @s: string argument specifiers
 * @index: index of argument specifier.
 * Return: amount of specifiers.
 */
int print_conv_spec(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_string}, {"i", print_int},
		{"d", print_int}, {"b", print_binary}, {"u", print_unst},
		{"o", print_oct}, {"x", print_hex}, {"X", print_uhx},
		{"S", print_usr}, {"p", print_address}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunst}, {"lo", prinloct},
		{"lx", prinlhex}, {"lX", prinluhx}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunst}, {"ho", prinhoct},
		{"hx", prinhhex}, {"hX", prinhuhx}, {"#o", prinnoct},
		{"#x", prinnhex}, {"#X", prinnuhx}, {"#i", print_int},
		{"#d", print_int}, {"#u", print_unst}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unst}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_uhx}, {" i", prinsint},
		{" d", prinsint}, {" u", print_unst}, {" o", print_oct},
		{" x", print_hex}, {" X", print_uhx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint}, {" %", print_prg},
		{"-", print_ncs}, {"0", print_ncs0}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
