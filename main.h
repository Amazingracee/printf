#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list data, char *buf, unsigned int ibuf);
int print_string(va_list data, char *buf, unsigned int ibuf);
int print_int(va_list data, char *buf, unsigned int ibuf);
int print_binary(va_list data, char *buf, unsigned int ibuf);
int print_unst(va_list data, char *buf, unsigned int ibuf);
int print_oct(va_list data, char *buf, unsigned int ibuf);
int print_hex(va_list data, char *buf, unsigned int ibuf);
int print_uhx(va_list data, char *buf, unsigned int ibuf);
int print_usr(va_list data, char *buf, unsigned int ibuf);
int print_address(va_list data, char *buf, unsigned int ibuf);
int print_rev(va_list data, char *buf, unsigned int ibuf);
int print_rot(va_list data, char *buf, unsigned int ibuf);
int prinlint(va_list data, char *buf, unsigned int ibuf);
int prinlunst(va_list data, char *buf, unsigned int ibuf);
int prinloct(va_list data, char *buf, unsigned int ibuf);
int prinlhex(va_list data, char *buf, unsigned int ibuf);
int prinluhx(va_list data, char *buf, unsigned int ibuf);
int prinhint(va_list data, char *buf, unsigned int ibuf);
int prinhunst(va_list data, char *buf, unsigned int ibuf);
int prinhoct(va_list data, char *buf, unsigned int ibuf);
int prinhhex(va_list data, char *buf, unsigned int ibuf);
int prinhuhx(va_list data, char *buf, unsigned int ibuf);
int prinpint(va_list data, char *buf, unsigned int ibuf);
int prinnoct(va_list data, char *buf, unsigned int ibuf);
int prinnhex(va_list data, char *buf, unsigned int ibuf);
int prinnuhx(va_list data, char *buf, unsigned int ibuf);
int prinsint(va_list data, char *buf, unsigned int ibuf);
int (*get_conv_spec(const char *s, int index))(va_list, char *, unsigned int);
int print_conv_spec(const char *s, int index);
unsigned int mang_buf(char *buf, char c, unsigned int ibuf);
int _toprint(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
