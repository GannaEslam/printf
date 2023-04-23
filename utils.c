#include "main.h"
/**
 * rev_str - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_str(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_strcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
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
 * _strcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _strcpy() function returns a pointer to dest.
 */
char *_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * print_base - sends characters to be written on standard output
 * @str: String to parse
 */
void print_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
