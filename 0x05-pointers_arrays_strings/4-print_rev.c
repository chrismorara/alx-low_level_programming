#include "main.h"

/**
 * print_rev - prints a string
 * @s: prints a string in reverse followed by a new line
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar(10);
}
