#include "main.h"
/**
 * _putc - get char from va list
 * @ls: the list holds the char
 * Return: 1
*/
int _putc(va_list ls)
{
	_putchar(va_arg(ls, int));
	return (1);
}

/**
 * print_string - get string from va list
 * @list: the list holds the char
 * Return: length of string
*/
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * putper - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int putper(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
/**
 * base_length - get the length of specific base
 * @n: the number to get the base of
 * @b: the base
 * Return: the length of the base
*/
unsigned int base_length(unsigned int n, int b)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                n = n / b;
        }

        return (i);
}

/**
 * put_rev - wrtie the base
 * @s: string to be written
*/
void put_rev(char *s)
{
        int i = 0, j;

        if (!s)
                s = "(null)";

        while (s[i])
        {
                i++;
        }

        for (j = i - 1; j >= 0; j--)
        {
                _putchar(s[j]);
        }

}
