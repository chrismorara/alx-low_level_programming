#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: print a string
 * Return: always 0.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
