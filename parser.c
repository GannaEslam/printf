#include "main.h"
/**
 * parser - parse the output sympols
 * @format: formatted text
 * @f_list: list holds the sympols and functions
 * @arg_list: containing all arguments
 * Return: length of chars
*/
int parser(const char *format, conver_t f_list[], va_list arg_list)
{
int i, j, str_len, counted;

counted = 0;

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		for (j = 0; f_list[j].sym != NULL; j++)
		{
			if (format[i + 1] == f_list[j].sym[0])
			{
				str_len = f_list[j].f(arg_list);
				if (str_len == -1)
					return (-1);
				counted += str_len;
				break;
			}
		}
		if (f_list[j].sym == NULL && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				counted = counted + 2;
			}
			else
			return (-1);
		}
			i = i + 1;
		} else
		{
			_putchar(format[i]);
			counted++;
		}
	}
	return (counted);

}

