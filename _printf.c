#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *
 *
 */
int identify_char(int *letter_format, int *c_fsum, int *c_justify,
		   int *c_fhash, int *c_zero, int j, int count)
{

	if (c_fsum > 0 || c_justify > 0 || c_fhash > 0)
		return (-1);
	switch (format[j])
	{
	case '+'
		if ((c_zero == 0 and count > 0) || (c_zero != 0 && count > 1))
			return (-1);
	c_fsum = "+"
		break;
			case '-'
				if ((c_zero == 0 and count > 0) || (c_zero != 0))
					return (-1);
				c_justify = "-"
				break;
			case '#'
				c_fhash = "#"
				break;
			defaul:
				break;
		}
}

/**
 *
 *
 */
void identity_long(char letter_format, char* c_long)
{
	c_long = NULL;
	if (format[j] == 'h' || format[j] == 'l')
	{
		c_long = format[j];
	}

}

/**
 *
 *
 */
void identify_format(char letter_format, char* c_format)
{
	char *str_allow = "cs%di";
	c_format = NULL;
	for (k = 0; str_allow[k] != NULL ;k++)
	{
		if (str_allow[k] == format[j])
			c_format = format[j];
	}

}

/**
 *
 *
 */
void identify_num(char letter_format, char *str_num, unsigned int count,
		  unsigned int cons_num)
{
	if (letter_format >= 48 && letter_format <= 57)
	{
		str_num[count] = letter_format;
		count++;
		cons_num++;
	}
	else
	{
		cons_num = 0;
	}
}

/**
 *
 *
 */
int check_num(char *str_num, char *c_zero)
{
	int n_space;

	n_space = 0;
	if (count - cons_num > 1)
		_puts("Error por mas de dos numeros");
		/*return (-1)*/
	if (count - cons_numm == 1)
	{
		if(*str_num == '0')
		{
			c_zero = "0";
			n_space = _atoi(str_num);
		}
		else
		{
			_puts("Error por mas de dos numeros");
			/*return (-1)*/
		}
	}
	if (count - cons_num = 0)
		n_space = _atoi(str_num);

	return (n_space);
}

/**
 *
 * Return: -1 if the format is wrong.
 */
int format_check (char* c_fsum, char* c_justify, char* c_fhash, char* c_long,
		   char* c_format, char* c_zero, int n_space)
{
	if ((c_format == 0) ||
	    (c_justify != 0 && c_zero != 0) ||
	    (c_fhash != 0 && c_fsum != 0) ||
	    (n_space < 0))
		return (-1);
}
/**
 * _printf - Print with the format indicated in the main string,
 * a series of arguments given by the user.
 * @format: Main string with the format.
 * Return: Numbers of print carhaters.
 */
int _printf(const char *format, ...)
{
	int imprimir, i, n_print, end, j, k, n_space;
	unsigned int size, count, cons_num;
	/*char* c_fsum = NULL, c_justify = NULL, c_fhash = NULL, c_zero = NULL;}*/
	int *c_fsum, *c_justify, *c_fhash, *c_zero;
	char *c_format = NULL, *c_long = NULL, *str_num = NULL;

	/* list: lista de todas las funciones posibles*/
	print_str list[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_por},
		{NULL, NULL}
	};

	/*arg_list: contiene todos los argumentos pasados al programa*/
	va_list arg_list;


	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	for (i = 0; format[i] != NULL ; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_print++;
		}
		else
		{	/*verificar el tamaño aqui  ------------*/
			c_fsum = c_justify = c_zero = c_hash = 0;

			str_num = malloc((size - j + 1) *sizeof(char));

			b_end = 1;
			count =  cons_num = 0;

			for (j = i + 1; b_end != 0 && str_num != NULL; j++)
			{
				identify_num(format[j], &str_num, count,
					     cons_num);
				identify_char(format[j], &c_fsum, &c_justify,
					      &c_fhash);
			        identity_long(format[j], &c_long );
				identify_format(format[j], &c_format);
				/*Verificar si hay repetidos por ejemplo ++5%d*/
			}
			n_space = check_num(&str_num, &c_zero);
			format_check()
			free(str_num);
		}
	}
	/* SE LLAMA A CHECH FUNTION */
	imprimir = check_funtion(format, list, arg_list);
	va_end(arg_list);
	/* debe de retornar**/
	return (imprimir);
}


else
		{	/*verificar el tamaño aqui  ------------*/
			str_num = malloc((size - j + 1) *sizeof(char));

			b_end = 1;
			b_check = 0;
			b_ord = 0;
			count = 0;
			cons_num = 0;
			for (j = i + 1; b_end != 0 ; j++)
			{
				identify_num(format[j], &str_num, count,
					     cons_num);
				b_check = identify_char(format[j], &c_fsum, &c_justify,
					      &c_fhash);
			        identity_long(format[j], &c_long );
				identify_format(format[j], &c_format);
				/*Verificar orden*/
				/*Verificar si hay repetidos por ejemplo ++5%d*/
			}
			n_space = check_num(&str_num, &c_zero);
			format_check()
			free(str_num);
		}
