#include "main.h"
/**
 * _putbinary - brint binary number
 * @ls: list holds the number
 * Return: the length of number
*/
int _putbinary(va_list ls)
{
	unsigned int num, len;
	int i;
	char *s;

	num = va_arg(ls, unsigned int);
	if (num == 0)
	{
		return (_putchar('0'));
	}
	if (num < 0)
	{
		return (-1);
	}
	len = base_length(num, 2);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
		{
			s[i] = '0';
		} else
		{
			s[i] = '1';
		}
		num = num / 2;
	}
	s[i] = '\0';
	put_rev(s);
	free(s);
	return (len);
}
