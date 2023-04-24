#include "main.h"
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
