#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
        va_list args;
        conver_t ls[] = {
                {"c", _putc},
                {"s", print_string},
                {"%", putper},
                {NULL, NULL}
        };

        if (format == NULL)
        {
                return (-1);
        }

        va_start(args, format);
        printed_chars = parser(format, ls, args);
        va_end(args);

        return (printed_chars);
}
