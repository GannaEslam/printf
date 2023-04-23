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
