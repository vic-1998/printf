#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_format - Get the function to print.
 * @format: String with the indicated formated.
 * Return: Pointer to print function
 * or NULL if the inicated foramat is not valid.
 */
static int (*get_format(const char *format))(va_list)
{
	unsigned int i;
	print_format arr_print[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_por},
		{"d", print_int},
		{"i", print_dec},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; arr_print[i].str_format != NULL; i++)
	{
		if (*(arr_print[i].str_format) == *format)
			break;
	}
	return (arr_print[i].fun_print);
}

/**
 * _printf - Print a arguement with the format indicated.
 * @format: Main string with the format.
 * Return: Numbers of print carhaters.
 */
int _printf(const char *format, ...)
{
	unsigned int i, n_print = 0;
	int (*f_print)(va_list);
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	for (i = 0; format[i] != '\0' ; i++)
	{
		/*Print and count until find a '%'*/
		for (; format[i] != '%' && format[i] != '\0'; i++)
		{
			_putchar(format[i]);
			n_print++;
		}
		if (format[i] == '\0')
			return (n_print);
		/*If the character is a alone '%' -> Find a function format*/
		if (format[i + 1] == '\0')
			return (-1);

		f_print = get_format(&format[i + 1]);

		if (f_print != NULL) /*If the function was found*/
		{
			n_print += f_print(arg_list);
			i += 1;
		}
		else
		{
			_putchar('%');
			n_print++;
		}
	}
	va_end(arg_list);
	return (n_print);
}
