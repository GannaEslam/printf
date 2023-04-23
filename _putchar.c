#include "main.h"

/**
 * _putchar - print single char
 * @c: the chararcter
 * Return: om success one
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
